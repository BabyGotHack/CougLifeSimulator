#include "Text.h"



Text::Text(SDL_Renderer *renderer, const std::string fontPath, int fontSize, const std::string message, const SDL_Color color)
{
	_texture = loadFont(renderer, fontPath, fontSize, message, color);
	SDL_QueryTexture(_texture, nullptr, nullptr, &_text_rect.w, &_text_rect.h);

}


Text::~Text()
{
}

Text::Text()
{
}

void Text::display(int x, int y, SDL_Renderer *renderer)
{
	SDL_QueryTexture(_texture, nullptr, nullptr, &_text_rect.w, &_text_rect.h);
	_text_rect.x = x;
	_text_rect.y = y;

	SDL_RenderCopy(renderer, _texture, nullptr, &_text_rect);
}

SDL_Texture *Text::loadFont(SDL_Renderer *renderer, std::string fontPath, int fontSize, std::string message, SDL_Color color)
{
	TTF_Font *font = TTF_OpenFont(fontPath.c_str(), fontSize);

	if (!font) {

	}
	SDL_Surface *textSurface = TTF_RenderText_Solid(font, message.c_str(), color);
	if (!textSurface) {

	}

	SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
	if (!textTexture) {

	}
	SDL_FreeSurface(textSurface);
	_texture = textTexture;
	return textTexture;
}
