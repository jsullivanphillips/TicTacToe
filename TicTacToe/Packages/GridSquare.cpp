//
//  GridSquare.cpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//
#include <iostream>
#include "GridSquare.hpp"
using namespace Gs;

bool inRange(unsigned low, unsigned high, unsigned x)
{
 return (low <= x && x <= high);
}

int GridSquare::GetState(){
    return state;
}

void GridSquare::SetState(int x){
    if(inRange(0,2,x)){
        state = x;
    }else{
        std::cout << "Error. Out of range state " << x << " entered into GridSquare constructor\n";
    }
}

void GridSquare::PrintState(){
    std::cout << GridSquare::state <<"\n";
}

GridSquare::GridSquare(int x){
    if(inRange(0,2,x)){
        state = x;
    }else{
        std::cout << "Error. Out of range state " << x << " entered into GridSquare constructor\n";
    }
}

GridSquare::GridSquare(){
    state = 0;
}
