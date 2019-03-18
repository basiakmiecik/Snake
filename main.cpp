#include <iostream>
#include <iomanip>
#include "Play.h"
#include "GameField.h"
#include "Snake.h"


int main()

{
    Play play;
    GameField gameField= play.generateBoard();
    play.playGame(gameField);


    return 0;
}