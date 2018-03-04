#pragma once

#include "player.h"

//Player Constructor
player::player()
{

}

//Player Deconstructor
player::~player()
{

}

//Difficulty Constructor
difficulty::difficulty()
{
	srand(time(NULL));

	this->luck = (rand() % 10) + 1;

	this->multiplier = 2;
}

//Get the luck value
int difficulty::getluck()
{
	return this->luck;
}

//Get the multiplier value
int difficulty::getMultiplier()
{
	return this->multiplier;
}

//Sets the difficulty
void difficulty::setDifficult(int difficulty)
{
	this->multiplier = difficulty;
}

//Difficulty Deconstructor
difficulty::~difficulty()
{

}

//Status Set Stress
void status::setStress(int event, int difficulty)
{
	if (event < 0)
	{
		this->stress -= difficulty * event;
	}
	else
	{
		this->stress -= event / difficulty;
	}
}

//Status Constructor
status::status()
{
	this->sanity = 100;
	this->stress = 0;
}

//Status Deconstructor
status::~status()
{

}