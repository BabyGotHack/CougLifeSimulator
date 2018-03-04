#pragma once

#include <GL/glew.h>
class Sprite
{
public:
	Sprite();
	~Sprite();


	void init(float sizeX, float sizeY, float posX, float posY);
	void draw(float r, float g, float b);

private:
	float _posX, _posY;
	float _sizeX, _sizeY;
	GLuint _vboID;
};

