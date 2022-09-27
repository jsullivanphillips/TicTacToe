//
//  Grid.cpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//

#include "Grid.hpp"
#include <iostream>
#define MAP_SIZE 3

Grid::Grid(){
    Gs::GridSquare map[MAP_SIZE][MAP_SIZE];
    for (int i = 0; i < MAP_SIZE; i ++){
        for (int j = 0; i < MAP_SIZE; i++){
            map[i][j] = Gs::GridSquare(0);
        }
    }
}

void Grid::PrintGrid(){
    std::cout << "\n";
    for (int i = 0; i < MAP_SIZE; i ++){
        for (int j = 0; j < MAP_SIZE; j++){
            if(map[i][j].GetState() == 0){
                std::cout << " -";
            }
            if(map[i][j].GetState() == 1){
                std::cout << " X";
            }
            if(map[i][j].GetState() == -1){
                std::cout << " O";
            }
        }
        std::cout << "\n";
    }
}

//Check if win condition is met
int Grid::IsWin(){
    // Check if there is 3 in a row
    for (int i = 0; i < MAP_SIZE; i++){
        int row_sum = 0;
        for (int j = 0; j < MAP_SIZE; j++){
            row_sum += map[i][j].GetState();
        }
        if (row_sum == MAP_SIZE || row_sum == -MAP_SIZE){
            return row_sum;
        }
    }
    // Check if there is 3 in a collumn
    for (int j = 0; j < MAP_SIZE; j++)
    {
        int col_sum = 0;
        for (int k = 0; k < MAP_SIZE; k ++){
            col_sum += map[k][j].GetState();
        }
        if (col_sum == MAP_SIZE || col_sum == -MAP_SIZE){
            return col_sum;
        }
    }
    // Check diagonals for 3 in a line
    int diag_sum = 0;
    for (int p = 0; p < MAP_SIZE; p++){
        diag_sum += map[p][p].GetState();
    }
    if(diag_sum == MAP_SIZE || diag_sum == -MAP_SIZE){
        return diag_sum;
    }
    
    diag_sum = 0;
    for (int p = 0; p < MAP_SIZE; p++){
        diag_sum += map[2 - p][p].GetState();
    }
    if(diag_sum == MAP_SIZE || diag_sum == -MAP_SIZE){
        return diag_sum;
    }
    return 0;
}
