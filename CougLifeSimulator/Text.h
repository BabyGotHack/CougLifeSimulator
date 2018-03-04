#pragma once
#include <SDL_ttf.h>
#include <SDL.h>
#include <string>


class Text
{
public:
	Text(SDL_Renderer *renderer, std::string fontPath, int fontSize, std::string message, SDL_Color color);
	~Text();
	Text();

	void display(int x, int y, SDL_Renderer *renderer);
	SDL_Texture *loadFont(SDL_Renderer *renderer, std::string fontPath, int fontSize, std::string message, SDL_Color color);

private:
	SDL_Texture *_texture;
	SDL_Rect _text_rect;
	int x, y;
};

