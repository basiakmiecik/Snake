

#include "Snake.h"


Snake::Snake()
{
    sizeX=3;
    sizeY=1;
}

int Snake::getSizeX()
{
    return sizeX;
}

int Snake::getSizeY()
{
    return sizeY;
}

char Snake::getSnakePart()
{
    return '*';
}