
#include "Play.h"



GameField Play :: generateBoard()
{
    /*int size;
    std::cout<<"Podaj z rozmiar planszy: ";
    std::cin>>size;*/
    GameField gameField{30};
    return gameField;
}



void  Play:: playGame(GameField &gameField)
{
    Snake snake;



    bool stop=false;
    do
    {
        gameField.positionOfSnake(snake, 1, 1);
        gameField.showGamefield();
        stop=gameField.endOfGame(snake,1,1);

    }while(!stop);
}
