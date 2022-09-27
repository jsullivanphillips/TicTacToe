//
//  main.cpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//
#include <iostream>
#include "Packages/GridSquare.hpp"
#include "Packages/Grid.hpp"
#define PLAYER_X 1
#define PLAYER_O -1

bool InRange(int low, int high, int x)
{
 return (low <= x && x <= high);
}


int main(int argc, const char * argv[]) {
    // Setup grid object
    Grid new_grid;
    new_grid.PrintGrid();

    // Variables for tracking game state
    bool gameOver = false;
    int curr_player = PLAYER_X;
    char player_token = 'X';
    int turn = 0;
    
    while(!gameOver){
        if (curr_player == PLAYER_X){
            player_token = 'X';
        } else if (curr_player == PLAYER_O){
            player_token = 'O';
        }
        //Enter player move
        std::cout << "Player " << player_token << "\'s Turn. Please enter two coordinates in the form <x-coord> (hit enter) <y-coord> (hit enter) \n";
        bool validMove = false;
        int x = 0;
        int y = 0;
        while(!validMove){
            std::cin >> x;
            while(std::cin.fail()) {
                std::cout << "Error" << std::endl;
                std::cin.clear();
                std::cin.ignore(256,'\n');
                std::cin >> x;
            }
            std::cin >> y;
            while(std::cin.fail()) {
                std::cout << "Error" << std::endl;
                std::cin.clear();
                std::cin.ignore(256,'\n');
                std::cin >> y;
            }
                while(std::cin.fail()) {
                    std::cout << "Error" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    std::cin >> x;
                }
                std::cout << x << std::endl;
            if (InRange(0, 2, x) and InRange(0,2, y)){
                if(new_grid.map[x][y].GetState() == 0){
                    validMove = true;
                }else{
                    std::cout << "Please choose an empty space\n";
                }
            } else {
                std::cout << "x and/or y are out of range. pleae enter new values\n";
            }
        }
        new_grid.map[x][y].SetState(curr_player);
        new_grid.PrintGrid();
        //check if a player has won
        if(new_grid.IsWin() == 3){
            std::cout << "X wins! \n";
            gameOver = true;
        }else if(new_grid.IsWin() == -3){
            std::cout << "Y wins! \n";
            gameOver = true;
        }
        
        turn += 1;
        if(turn == 9){
            std::cout << "Stalemate.\n";
            gameOver = true;
        }
        //alternate turns
        if (curr_player == PLAYER_X){
            curr_player = PLAYER_O;
        }else{
            curr_player = PLAYER_X;
        }
    }
    return 0;
};
