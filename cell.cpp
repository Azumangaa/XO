#include "cell.h"
#include <string>
#include <map>

cell::cell( cell* topLeft, cell* top, cell* topRight, cell* right, cell* downRight, cell* down, cell* downLeft, cell* left )
{
    dirrections["top"] = top;
    dirrections["down"] = down;
    dirrections["left"] = left;
    dirrections["right"] = right;
    dirrections["topleft"] = topLeft;
    dirrections["downright"] = downRight;
    dirrections["downleft"] = downLeft;
    dirrections["topright"] = topRight;
    exst = true;
    fll = 0;
}

int cell::filled(){
    return fll;
}

cell* cell::move( std::string dirrection ) throw(int){

    if( !dirrections[dirrection]->exist() ) throw(0);
    return dirrections[dirrection];
}

bool cell::exist(){
    return exst;
}
