//
//  GridSquare.hpp
//  TicTacToe
//
//  Created by Jamie Sullivan-Phillips on 2022-09-26.
//

#ifndef GridSquare_hpp
#define GridSquare_hpp

namespace Gs{
    class GridSquare{
        int state;
    public:
        int GetState();
        void SetState(int x);
        GridSquare(int x);
        GridSquare();
        void PrintState();
    };
}

#endif /* GridSquare_hpp */
