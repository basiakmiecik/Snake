#pragma once
#include "Snake.h"

class GameField {

     int size;
    char **backboard = nullptr;

public:
    GameField (int size);

    void showGamefield();
    void positionOfSnake(Snake snake,  int startX,  int startY);
    bool endOfGame(Snake snake,  int startX,  int startY);

};


