#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "Semester.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::string;
using std::fstream;

Semester::Semester()
{
	timeOfDay = 0;
	day = 0;
	grade;
	class1;
}

Semester::~Semester()
{

}
