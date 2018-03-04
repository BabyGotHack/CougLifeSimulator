#pragma once

#include <iostream>;
#include <ctime>;

//Difficulty multiplier and luck value
class difficulty
{
public:
	difficulty();
	~difficulty();
private:
	int luck;
	int multiplier;
};

//Players current status
class status
{
public:

private:
	int stress;
	int sanity;
	int sleep;
};

//Player traits and difficulty wrapper
class player
{
public:
	player();
	~player();
private:
	difficulty d_player;
	status s_player;
};

