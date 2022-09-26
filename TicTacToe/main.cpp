//
//  main.cpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//
#include <iostream>
#include "Packages/GridSquare.hpp"
#include "Packages/Grid.hpp"


int main(int argc, const char * argv[]) {
    Grid new_grid;
    new_grid.PrintGrid();
    new_grid.map[0][1].SetState(1);
    new_grid.map[0][2].SetState(2);
    new_grid.PrintGrid();
    
    return 0;
};
