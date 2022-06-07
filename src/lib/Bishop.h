#ifndef _BISHOP_H
#define _BISHOP_H

#include "Piece.h"

class Bishop: public Piece{
public:

    // Constructor with pawn-specific defaults.
    Bishop(string current_square_val, string color_val, int base_value_val=3, string name_val="B");

    // Method to be reimplemented.
    vector<vector<int>> get_all_moves();

};

#endif