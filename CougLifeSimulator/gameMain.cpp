#include "gameMain.h"



gameMain::gameMain()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	window = nullptr;
	
	
}


gameMain::~gameMain()
{
}

void gameMain::run()
{
	initGame();


	title.init(2,.2, -1, .8);
	_event.init(2, .2, -1, .6);
	hud1.init(.5f, .2f, -1.0f, -1.0f);
	hud2.init(.5f, .2f, -.5f, -1.0f);
	hud3.init(.5f, .2f, 0.0f, -1.0f);
	hud4.init(.5f, .2f, .5f, -1.0f);
	largeOption.init(1.8f, 1.2f, -.9f, -.7f);
	option1.init(1.8f, .4f, -.9f, .1f);
	option2.init(1.8f, .4f, -.9f, -.3f);
	option3.init(1.8f, .4f, -.9f, -.7f);
	text.loadFont(_renderer, "res/arial.ttf", 100, "Lol what I do", { 255,0,0,255 });
	
	gameLoop();
}

void gameMain::initGame()
{
	playing = true;
	mScreenSizeX = 400;
	mScreenSizeY = 400;
	window = SDL_CreateWindow("Pullman Trail", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, mScreenSizeX, mScreenSizeY, SDL_WINDOW_OPENGL);

	if (window == nullptr) {
		helper("window did not open properly");
	}


	SDL_GLContext context = SDL_GL_CreateContext(window);
	if (context == nullptr) {
		helper("GL context could not be made");
	}


	GLenum error = glewInit();

	if (error != 0) {
		helper("glew could not be initialized ");
	}

	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	glClearColor(1.0f, 1.0f, 0.0f, 1.0);

	_renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (!_renderer) {
		helper("failed to create render");
	}

	if (TTF_Init() == -1) {
		helper("failed to initialize ttf");
	}
	
}

void gameMain::gameLoop()
{
	while (playing) {
		
		drawGame();
		processInput();
	}
}

void gameMain::processInput()
{
	while (SDL_PollEvent(&evnt)) {
		switch (evnt.type) {
		case SDL_QUIT:
			playing = false;
			break;
		case SDL_MOUSEBUTTONDOWN:
			std::cout<<"x = " <<evnt.motion.x<<"\ny = "<<evnt.motion.y<<std::endl;
			
			_mouseX = evnt.motion.x;
			_mouseY = evnt.motion.y;

			// playing = false;
			break;
		}
	}
}

void gameMain::drawGame()
{
	glClearDepth(1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	title.draw(.3f,.7f,.70000f);
	_event.draw(.5f, 1.0f, .5f);

	/*hud1.draw((rand() % 255) / (double)255, (rand() % 255) / (double)255, (rand() % 255) / (double)255);
	hud2.draw((rand() % 255) / (double)255, (rand() % 255) / (double)255, (rand() % 255) / (double)255);
	hud3.draw((rand() % 255) / (double)255, (rand() % 255) / (double)255, (rand() % 255) / (double)255);
	hud4.draw((rand() % 255) / (double)255, (rand() % 255) / (double)255, (rand() % 255) / (double)255);
	largeOption.draw((rand() % 255) / (double)255, (rand() % 255) / (double)255, (rand() % 255) / (double)255);*/
	option1.draw(1, 0, 0);
	option2.draw(0, 1, 0);
	option3.draw(0, 0, 1);
	text.display(100,100,_renderer);
	SDL_GL_SwapWindow(window);
}

void gameMain::helper(std::string message)
{

	std::cout << message << std::endl;
	std::cout << "Press any key to continue" << std::endl;
	std::getchar();
	std::cin.ignore(INT_MAX, '\n');
	playing = false;

}
