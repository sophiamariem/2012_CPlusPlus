#include<iostream>
#include<string>
#include "University.h"
#include <cmath>
#include <cstdlib>


using namespace std;

int main() {

	Course t1("CO7104");

	cout << "Information of t1: " <<t1.toString() << endl;

	Lecture c1;

	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);
	t1.addLecture(c1);

	cout << "Information of t1: " <<t1.toString() << endl;

	t1.addLogEntry(3,20);

	cout << "Information of t1: " <<t1.toString()  << endl;

	Course t2=t1;

	cout << "Information of t2: " <<t1.toString() << endl;

	Course t3;
	t3=t1;

	cout << "Information of t3: " <<t1.toString() << endl;

	t2.addLecture(c1);
	t1.addLogEntry(3,-4);
	t3.addLogEntry(6,10);

	cout << "-----------------------------------------------"<< endl;

	cout << "Information of t1: " <<t1.toString() << endl;
	cout << "Information of t2: " <<t2.toString() << endl;
	cout << "Information of t3: " <<t3.toString() << endl;

}