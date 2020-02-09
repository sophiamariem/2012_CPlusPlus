#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Lecture.h"
#include "Course.h"

using namespace std;

class University{

public : 
	University(); //default constructor
	University(University &other); // copy constructor
	University(string s);//constructor
	void addCourse(Course); //method for adding course
	void listAll(); //method for listing all courses
	void copy(University &other); // copy method
	~University();                // destructor
	University& operator=(University& other); // overloading of '='

private: 
	string name;
	Course* myCourse;
	int cap;
	int length;
};

#endif

