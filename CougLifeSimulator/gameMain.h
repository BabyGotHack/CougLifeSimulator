#pragma once

#include <SDL.h>
#include <GL\glew.h>
#include "player.h"
#include <iostream>
#include <string>
#include "Sprite.h"

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
	void drawGame();

	void helper(std::string message);

	SDL_Window* window;

	SDL_Event evnt;
	player _player;
	bool playing;

	int _mouseX, _mouseY;
	int mScreenSizeX, mScreenSizeY;

	Sprite title, _event, option1, option2, option3, hud1, hud2, hud3, hud4, largeOption;
};

