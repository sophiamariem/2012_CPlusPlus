#include <iostream>
#include <string>
#include <sstream>
#include "University.h"

using namespace std;

//default constructor
University::University()
{
	cap=8;
	length=0;
	myCourse = new Course[cap];
	name="NA";
}

//constructor
University::University(string s){
	cap=8;
	length=0;
	myCourse = new Course[cap];
	name=s;
}

//copy constructor
University::University(University &other)
{
	copy (other);
}

//method for adding course
void University::addCourse(Course d){

	if (length==cap) {
		cap=cap*2;
		Course* temp = new Course[cap];
		for (int i = 0; i < length;  i++) {
			temp[i]=myCourse[i];
		}
		delete [] myCourse;
		myCourse=temp;
	}
	myCourse[length] = d;
	length++;

}

// copy method
void University::copy(University &other){

	cap=other.cap;
	length=other.length;
	myCourse= new Course[cap];

	for (int i=0; i<length; i++) {
		myCourse[i]= other.myCourse[i];
	}

}

// destructor
University::~University()
{
	delete [] myCourse;
	myCourse = NULL;
	cap=0;
	length=0;
}

// overloading of '='
University& University::operator=(University& other){
	if (&other != this) {
		delete [] myCourse;
		copy (other);
	}
	return *this;
}

//method for listing all courses
void University::listAll(){

	cout <<"The University "<<name << ", has "<<length<<" courses." <<endl;	
	for (int i=0; i<length; i++) {
		cout <<"Course "<<i <<": " << myCourse[i].toString() << endl;
	}
}


