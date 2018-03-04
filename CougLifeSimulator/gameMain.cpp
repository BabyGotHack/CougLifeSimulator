#include "gameMain.h"



gameMain::gameMain()
{
	SDL_Init(SDL_INIT_EVERYTHING);


	window = SDL_CreateWindow("Cougar Life Simulator", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, SDL_WINDOW_OPENGL);
}


gameMain::~gameMain()
{
}

void gameMain::gameLoop()
{
	cout << "Hello, welcome to Washington State University. What's your major?" << endl;
}
