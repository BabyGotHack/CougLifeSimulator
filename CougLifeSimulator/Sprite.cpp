#include "Sprite.h"



Sprite::Sprite()
{
	_vboID = 0;
}


Sprite::~Sprite()
{
	if (_vboID != 0) {
		glDeleteBuffers(1, &_vboID);
	}
}

void Sprite::init(float sizeX, float sizeY, float posX, float posY)
{
	_posX = posX;
	_posY = posY;
	_sizeX = sizeX;
	_sizeY = sizeY;
		

	if (_vboID == 0) {
		glGenBuffers(1, &_vboID);
	}
	float vertex[12];


	//triangle 1
	vertex[0] = posX;
	vertex[1] = posY;

	vertex[2] = posX + sizeX;
	vertex[3] = posY;

	vertex[4] = posX;
	vertex[5] = posY + sizeY;


	//triangle 2

	vertex[6] = posX+sizeX;
	vertex[7] = posY+sizeY;

	vertex[8] = posX + sizeX;
	vertex[9] = posY;

	vertex[10] = posX;
	vertex[11] = posY + sizeY;

	

	glBindBuffer(GL_ARRAY_BUFFER, _vboID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertex), vertex, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

}

void Sprite::draw(float r, float g, float b)
{
	glBindBuffer(GL_ARRAY_BUFFER, _vboID);


	glEnableVertexAttribArray(0);

	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);

	glColor3f(r, g, b);
	glDrawArrays(GL_TRIANGLES, 0, 6);

	glDisableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
