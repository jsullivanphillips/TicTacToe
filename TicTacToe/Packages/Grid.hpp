//
//  Grid.hpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//

#ifndef Grid_hpp
#define Grid_hpp

#include <stdio.h>
#include "GridSquare.hpp"


class Grid{
public:
    Gs::GridSquare map[3][3];
    Grid();
    void PrintGrid();
    int IsWin();
};


#endif /* Grid_hpp */
