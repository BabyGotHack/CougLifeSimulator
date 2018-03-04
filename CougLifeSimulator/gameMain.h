#pragma once

#include <SDL.h>
#include <GL\glew.h>
#include "player.h"

class gameMain
{
public:
	gameMain();
	~gameMain();


private: 

	void initGame();
	void gameLoop();



	SDL_Window* window;

};

