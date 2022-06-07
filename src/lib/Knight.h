#ifndef _KNIGHT_H
#define _KNIGHT_H

#include "Piece.h"

class Knight: public Piece{
public:

    // Constructor with pawn-specific defaults.
    Knight(string current_square_val, string color_val, int base_value_val=3, string name_val="N");

    // Method to be reimplemented.
    vector<vector<int>> get_all_moves();

};

#endif