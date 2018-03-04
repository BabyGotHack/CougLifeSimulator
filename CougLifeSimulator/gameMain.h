#pragma once

#include <SDL.h>
#include <GL\glew.h>
#include "player.h"
#include <iostream>
#include <string>
#include "Sprite.h"
#include <SDL_ttf.h>
#include "Text.h"

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

	//Text text;

	SDL_Window* window;

	SDL_Event evnt;
	player _player;
	bool playing;
	SDL_Renderer *_renderer;
	int _mouseX, _mouseY;
	int mScreenSizeX, mScreenSizeY;
	Text text;
	Sprite title, _event, option1, option2, option3, hud1, hud2, hud3, hud4, largeOption;
};

