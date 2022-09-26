//
//  Grid.cpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//

#include "Grid.hpp"
#include <iostream>

Grid::Grid(){
    Gs::GridSquare map[3][3];
    for (int i = 0; i < 3; i ++){
        for (int j = 0; i < 3; i++){
            map[i][j] = Gs::GridSquare(0);
        }
    }
}

void Grid::PrintGrid(){
    std::cout << "\n";
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j++){
            if(map[i][j].GetState() == 0){
                std::cout << " 0";
            }
            if(map[i][j].GetState() == 1){
                std::cout << " X";
            }
            if(map[i][j].GetState() == 2){
                std::cout << " O";
            }
        }
        std::cout << "\n";
    }
}
