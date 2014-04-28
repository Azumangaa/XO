#ifndef CELL_H
#define CELL_H
#include <string>
#include <map>

class cell
{
public:
    cell( cell* topLeft, cell* top, cell* topRight, cell* right, cell* downRight, cell* down, cell* downLeft, cell* left );
    cell(bool empty);
    int filled();
    cell* move( std::string dirrection ) throw(int);
    bool exist();

private:
    std::map <std::string,cell*> dirrections;
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
