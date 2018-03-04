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

class RandomLifeEvents
{
public:
	RandomLifeEvents(); //constructor
	~RandomLifeEvents(); //deconstructor
	RandomLifeEvents(RandomLifeEvents &copy); //copy constructor

	int randomLifeEventGenerator();
	int ChoiceGenerator();

	//getters/setters 
	bool getLifeEvent();
	void setLifeEvent(bool eventType);

private:
	int mLevel;
	int mLuck;
	bool mLifeEvent;
};