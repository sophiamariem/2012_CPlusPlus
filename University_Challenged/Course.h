#ifndef COURSE_H
#define COURSE_H
#include "Lecture.h"

using namespace std;

class Course{

public : 
	Course(); //default constructor
	Course(string s); //constructor
	Course(Course &other); // copy constructor
	void addLecture(Lecture c); //method for adding lecture
	void addLogEntry(int position, int change); //method for updating log
	string toString(); //method for printing out
	Lecture getLecture(int position); //method for getting lecture
	int getNumberOfLectures(); //method for getting number of lecture
	void copy(Course &other); // copy method
	~Course();                // destructor
	Course& operator=(Course& other); // overloading of '='

private: 
	string name;
	Lecture* myLecture;
	int cap;
	int length;
};

#endif

