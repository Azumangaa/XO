#include "cell.h"

cell::cell( cell* topLeft, cell* top, cell* topRight, cell* right, cell* downRight, cell* down, cell* downLeft, cell* left )
{
    tl = topLeft;
    t = top;
    tr = topRight;
    r = right;
    dr = downRight;
    d = down;
    dl = downLeft;
    l = left;
    exst = true;
    fll = 0;
}

bool cell::exist(){
    return exst;
}

int cell::filled(){
    return fll;
}

cell* cell::moveDown(){
    return d;
}

cell* cell::moveLeft(){
    return l;
}

cell* cell::moveDownLeft(){
    return dl;
}

cell* cell::moveRight(){
    return r;
}

cell* cell::moveDownRight(){
    return dr;
}

cell* cell::moveTop(){
    return t;
}

cell* cell::moveTopLeft(){
    return tl;
}

cell* cell::moveTopRight(){
    return tr;
}
