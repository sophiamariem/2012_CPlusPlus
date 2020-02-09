#ifndef LECTURE_H
#define LECTURE_H
#include<string>

using namespace std;

class Lecture{ 

public : 
	Lecture();                 // default constructor
	Lecture(Lecture &other);  // copy constructor
	string getLogs(); //method for getting logs
	void addLogEntry(int); //method for updating log
	void copy(Lecture &other); // copy method
	~Lecture();                // destructor
	Lecture& operator=(Lecture& other); // overloading of '='

private: 
	int* log;
	int used;
	int capacity;


};

#endif