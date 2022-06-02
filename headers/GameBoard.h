#pragma once

#include <stack>

#include "Piece.h"
#include "King.h"
#include "Queen.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Rook.h"
#include "Knight.h"

class GameBoard{
    private:
        Piece* Board[DIM][DIM];
        Piece COPY_BOARD[DIM][DIM];
        stack<vector<int>> moves_stack;
        bool isWhiteTurn;
    public:
        GameBoard();
        ~GameBoard();

        bool isCheckMate(char color);
        bool isInCheck(char color);
        bool hasAnyMoves(char color);
        bool move(int cur_pos, int end_pos);

        void switchTurns();
        void Display_Board();
        void undo_move();
};