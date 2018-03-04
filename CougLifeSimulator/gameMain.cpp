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
	player student;

	srand(time(NULL));

	int difficulty, stress;

	cout << "What major are you?" << endl;
	cout << "1. Communications Major (easy)" << endl;
	cout << "2. Psychology Major (medium)" << endl;
	cout << "3. Engineering Major (hard)" << endl;
	cin >> difficulty;

	student.setDifficulty(difficulty);

	stress = this->temp.randomLifeEventGenerator();

	student.setStess(difficulty, stress);

}
