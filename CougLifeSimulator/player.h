#pragma once

#include <iostream>;
#include <ctime>;

using std::cin;
using std::cout;
using std::endl;

//Difficulty multiplier and luck value
class difficulty
{
public:
	difficulty();
	~difficulty();
	int getluck();
	int getMultiplier();
	void setDifficult(int difficulty);
	void setStress(int stress, int difficulty);
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
	void setDifficulty(int level);
	void setStess(int level, int event);
private:
	difficulty d_player;
	status s_player;
};

