#ifndef GAMEFIELD_H
#define GAMEFIELD_H
#include "cell.h"

class gameField
{
public:
    gameField( int size, int countForWin);
    int check( int posX,int posY );
    int** getField();

private:
    cell** clls;
    int sz;
    int cntFrWn;

    void buildField();
};

#endif // GAMEFIELD_H
