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

//Difficulty Deconstructor
difficulty::~difficulty()
{

}