#pragma once

#include <SDL.h>
#include <GL\glew.h>
#include "player.h"
#include "Random.h"

class gameMain
{
public:
	gameMain();
	~gameMain();


private: 

	void initGame();
	void gameLoop();
	
	RandomLifeEvents temp;


	SDL_Window* window;

};

