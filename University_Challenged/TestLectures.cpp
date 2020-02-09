#include<iostream>
#include<string>
#include "Lecture.h"
#include <cmath>
#include <cstdlib>


using namespace std;

int main() {

	Lecture c1;
	cout << "Information of c1: " <<c1.getLogs() << endl;

	c1.addLogEntry(20);
	cout << "Information of c1: " <<c1.getLogs() << endl;


	Lecture c2=c1;
	cout << "Information of c2: " <<c1.getLogs() << endl;

	Lecture c3;
	c3=c1;

	cout << "Information of c3: " <<c1.getLogs() << endl;

	c1.addLogEntry(-4);
	c2.addLogEntry(10);

	cout << "-----------------------------------------------"<< endl;

	cout << "Information of c1: " <<c1.getLogs() << endl;
	cout << "Information of c2: " <<c2.getLogs() << endl;
	cout << "Information of c3: " <<c3.getLogs() << endl;


}
