#include<string>
#include<sstream>
#include "Lecture.h"
#include <iostream>
using namespace std;

// default constructor
Lecture::Lecture() {
	capacity=5;
	log = new int[capacity];
	used = 0;
}

// copy constructor
Lecture::Lecture(Lecture &other){
	copy (other);
}

//method for getting logs
string Lecture::getLogs() {
	ostringstream ans;
	ans << "[";
	for (int i=0; i<used-1; ++i) {
		ans << log[i] <<", ";
	}
	if (used>0) 
		ans << log[used-1] << "]";
	else
		ans << "empty log]";
	return ans.str();
}

//method for updating log
void Lecture::addLogEntry(int b) {
	if (used==capacity) {
		capacity *= 2;
		int* temp= new int[capacity];
		for (int i=0; i<used; ++i) {
			temp[i]=log[i];
		}
		delete[] log;
		log=temp;
	}
	log[used]=b;
	used++;
}

// copy method
void Lecture::copy(Lecture &other) {
	capacity=other.capacity;	
	used=other.used;
	log = new int[capacity];

	for (int i=0; i<used; i++) {
		log[i]= other.log[i];
	}
}

// destructor
Lecture::~Lecture() 
{
	capacity=0;
	delete [] log;
	log = NULL;
	used=0;
};

// overloading of '='
Lecture& Lecture::operator=(Lecture& other){
	if (&other != this) {
		delete [] log;
		copy (other);
	}
	return *this;
}