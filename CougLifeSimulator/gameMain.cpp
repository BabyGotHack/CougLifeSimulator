#include "gameMain.h"



gameMain::gameMain()
{
	SDL_Init(SDL_INIT_EVERYTHING);


	window = SDL_CreateWindow("Cougar Life Simulator", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 400, 400, SDL_WINDOW_OPENGL);
}


gameMain::~gameMain()
{
}

void gameMain::run()
{
	initGame();

	gameLoop();
}

void gameMain::initGame()
{
	playing = true;
	mScreenSizeX = 800;
	mScreenSizeY = 800;
}

void gameMain::gameLoop()
{
	while (playing) {


		processInput();
	}
}

void gameMain::processInput()
{
	SDL_Event action;
	while (SDL_PollEvent(&action)) {
		switch (action.type) {
		case SDL_QUIT:
			playing = false;
			break;
		case SDL_KEYDOWN:
			// playing = false;
			break;
		}
	}
}
