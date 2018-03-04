#pragma once

#include <SDL.h>
#include <GL\glew.h>
#include "player.h"

class gameMain
{
public:
	gameMain();
	~gameMain();


	void run();

private: 
	

	void initGame();
	void gameLoop();
	void processInput();



	SDL_Window* window;

	player _player;
	bool playing;

	int mScreenSizeX, mScreenSizeY;
};

