#include <iostream>
#include <iomanip>
#include "GameField.h"
#include "Snake.h"



GameField :: GameField (int size) :  size(size)
{
    backboard=new char*[size+4];

    for(int row=0; row<size+4;row++)
    {
        backboard[row]=new char[size+4];
        for (int col=0;col<size+4;col++)
        {
            backboard[row] [col] = ' ';
        }

        backboard[row][size+3]='\0';
        backboard[row][size+2]='#';
        backboard[row][0]='#';

    }
    for (int col=1;col<size+3;col++)
    {
        backboard[0][col] = '#';
        backboard[size+1][col] = '#';
    }
}


void GameField::showGamefield()
{
    for(int row=0;row<size+2;row++)
    {
        std::cout<<std::setw(3)<<backboard[row]<<std::endl;
    }
}

void GameField::positionOfSnake(Snake snake,  int startX,  int startY)
{

    for(int sizeX=0; sizeX<snake.getSizeX();sizeX++)
    {
        for(int sizeY=0;sizeY<snake.getSizeY(); sizeY++)
        {
            backboard[startY+sizeY][startX+sizeX]='*';
        }
    }

}

bool GameField::endOfGame(Snake snake,  int startX,  int startY)
{
    for(int row=0; row<size+3; row++)
    {
        if(backboard[row][0]=='*' || backboard[row][size+2]=='#')
            return true;
        for(int col=0; col<size+2;col++)
        {
            if(backboard[size+1][col]=='*' || backboard[0][col]=='*' )
                return true;
        }

    }
    return false;
}

