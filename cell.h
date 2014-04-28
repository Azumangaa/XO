#ifndef CELL_H
#define CELL_H

class cell
{
public:
    cell( cell* topLeft, cell* top, cell* topRight, cell* right, cell* downRight, cell* down, cell* downLeft, cell* left );
    cell(bool empty);
    int filled();
    cell* moveTopLeft();
    cell* moveTop();
    cell* moveTopRight();
    cell* moveRight();
    cell* moveDownRight();
    cell* moveDown();
    cell* moveDownLeft();
    cell* moveLeft();

    bool exist();

private:
    cell *tl;
    cell *t;
    cell *tr;
    cell *r;
    cell *dr;
    cell *d;
    cell *dl;
    cell *l;
/*
 *                    tl t tr
 *                      ###
 *                     l# #r
 *                      ###
 *                    ld d rd
 */
    int fll;
    bool exst;
};

#endif // CELL_H
