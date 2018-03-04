#pragma once

#include <string>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::string;
using std::fstream;

class Semester
{
public:
	Semester();
	~Semester();

protected:
	int timeOfDay;
	int day;
	string grade;
	string class1;

};