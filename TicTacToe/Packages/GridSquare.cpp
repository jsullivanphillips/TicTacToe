//
//  GridSquare.cpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//
#include <iostream>
#include "GridSquare.hpp"
#define MAX_STATE_VAL 1
#define MIN_STATE_VAL -1
using namespace Gs;


bool inRange(int low, int high, int x)
{
 return (low <= x && x <= high);
}

int GridSquare::GetState(){
    return state;
}

void GridSquare::SetState(int x){
    if(inRange(MIN_STATE_VAL,MAX_STATE_VAL,x)){
        state = x;
    }else{
        std::cout << "Error. Out of range state " << x << " entered into GridSquare SetState\n";
    }
}

void GridSquare::PrintState(){
    std::cout << GridSquare::state << "\n";
}

GridSquare::GridSquare(int x){
    if(inRange(MIN_STATE_VAL,MAX_STATE_VAL,x)){
        state = x;
    }else{
        std::cout << "Error. Out of range state " << x << " entered into GridSquare constructor\n";
    }
}

GridSquare::GridSquare(){
    state = 0;
}
