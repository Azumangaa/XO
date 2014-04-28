#include "gamefield.h"
#include <string>

gameField::gameField( int size, int countForWin )
{
    sz = size;
    cntFrWn = countForWin;
    buildField();
}

int gameField::check( int posX, int posY ){
    cell *actCell = &clls[posX][posY];

    std::string directions[4][2] = {{"top","down"},{"left","right"},{"topleft","downright"},{"downleft","topright"}};
    for( int i = 0; i < 4; i++ ){

        cell *curCellDir1 = actCell;
        cell *curCellDir2 = actCell;
        int countInRow = 0;

        for( int j = 0; j < cntFrWn - 1; j++ ){

            bool flagDir1 = true;
            bool flagDir2 = true;

            if( flagDir1 ){
                try{
                    curCellDir1 = curCellDir1->move(directions[i][0]);
                    if( curCellDir1->filled() == actCell->filled() ){
                        countInRow++;
                    }
                } catch( int e ) {
                    flagDir1 = false;
                }
            }

            if( flagDir2 ){
                try{
                    curCellDir2 = curCellDir2->move(directions[i][1]);
                    if( curCellDir2->filled() == actCell->filled() ){
                        countInRow++;
                    }
                } catch( int e ){
                    flagDir2 = false;
                }
            }

            if( !flagDir1 && !flagDir2 ) break;

            if( countInRow >= cntFrWn ){
                return 1;
            }
        }
    }

    return 0;
}

void gameField::buildField(){

}

int** gameField::getField(){

}
