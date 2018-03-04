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

	//getters/setters 
	int getLevel();
	int getLuck();
	bool getLifeEvent();
	void setLevel(int level);
	void setLuck(int luck);
	void setLifeEvent(bool eventType);

private:
	int mLevel;
	int mLuck;
	bool mLifeEvent;
};