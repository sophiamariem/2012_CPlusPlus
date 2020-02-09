#include <iostream>
#include <string>
#include <sstream>
#include "Course.h"

using namespace std;

//default constructor
Course::Course() {
	cap=8;
	length=0;
	myLecture = new Lecture[cap];
	name="NA";
}

//constructor
Course::Course(string s){
	cap=8;
	length=0;
	myLecture = new Lecture[cap];
	name=s;
}

// copy constructor
Course::Course(Course &other){
	copy (other);
}


//method for adding lecture
void Course::addLecture(Lecture c){

	if (length==cap) {
		cap=cap*2;
		Lecture* temp = new Lecture[cap];
		for (int i = 0; i < length;  i++) {
			temp[i]=myLecture[i];
		}
		delete [] myLecture;
		myLecture=temp;
	}
	myLecture[length] = c;
	length++;

}

//method for updating log
void Course::addLogEntry(int position, int change){
	if (0<=position && position<length) 
		myLecture[position].addLogEntry(change);
}

//method for printing out
string Course::toString(){
	ostringstream ans;
	ans << "The Course, "<< name << ", has "<< length << " Lectures." << endl;
	for (int i = 0; i<length;i++) {
		ans << " Lecture"<<i<<":" << myLecture[i].getLogs();
	}
	return ans.str();

}

//method for getting number of lectures
int Course::getNumberOfLectures() {
	return length;
}

//method for getting lecture
Lecture Course::getLecture(int position) {
	return myLecture[position];
}

//copy method
void Course::copy(Course &other) {

	cap=other.cap;	
	length=other.length;
	myLecture= new Lecture[cap];

	for (int i=0; i<length; i++) {
		myLecture[i]= other.myLecture[i];
	}
}

// destructor
Course::~Course() 
{
	delete [] myLecture;
	myLecture = NULL;
	cap=0;
	length=0;
};

// overloading of '='
Course& Course::operator=(Course& other){
	if (&other != this) {
		delete [] myLecture;
		copy (other);
	}
	return *this;
}
