#pragma once

#include <iostream>;
#include <ctime>;
#include "Semester.h"

//Difficulty multiplier and luck value
class difficulty
{
public:
	difficulty();
	~difficulty();
	int getluck();
	int getMultiplier();
	void setDifficult(int difficulty);
private:
	int luck;
	int multiplier;
};

//Players current status
class status
{
public:
	status();
	~status();
	void setStress(int event, int difficulty);
private:
	int stress;
	int sanity;
	int sleep;
};

//Player status and difficulty wrapper
class player
{
public:
	player();
	~player();
private:
	difficulty d_player;
	status s_player;
};

