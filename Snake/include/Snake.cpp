#include "Snake.h"

Snake::Snake(int gameSizeX, int gameSizeY)
{
	this->snakePosX = gameSizeX / 2;
	this->snakePosY = gameSizeY / 2;

}

Direction Snake::getSnakeDir()
{
	return this->dir;
}

void Snake::setSnakeDir(Direction userDir)
{
	this->dir = userDir;
}

int Snake::getPosX()
{
	return this->snakePosX;
}

int Snake::getPosY()
{
	return this->snakePosY;
}

bool Snake::isRunning()
{
	return this->isAlive;
}

void Snake::incrementPosX()
{
	this->snakePosX += 1;
};

void Snake::incrementPosY()
{
	this->snakePosY += 1;
};

void Snake::decreasePosX()
{
	this->snakePosX -= 1;
};

void Snake::decreasePosY()
{
	this->snakePosY -= 1;
};

void Snake::setPosX(int posX)
{
	this->snakePosX = posX;
};

void Snake::setPosY(int posY)
{
	this->snakePosY = posY;
};