#include<iostream>
#include<string>
#include "University.h"
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

	University u("University of Leicester");
	Course c("7104");
	Course c2("7205");
	Lecture l;


	l.addLogEntry(10);
	l.addLogEntry(20);
	l.addLogEntry(30);
	l.addLogEntry(40);

	c.addLecture(l);
	c.addLecture(l);
	c.addLecture(l);
	c.addLecture(l);
	c.addLecture(l);
	c.addLecture(l);

	c2 = c;

	c2.addLogEntry(3,-200);

	u.addCourse(c);  
	u.addCourse(c2);  
	u.addCourse(c2);

	u.listAll();

	cout <<c.toString()<<endl;
	cout <<c2.toString()<<endl;

}
