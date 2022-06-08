#ifndef _ROOK_H
#define _ROOK_H

#include "Piece.h"

class Rook: public Piece{
public:

    // Constructor with pawn-specific defaults.
    Rook(string current_square_val, string color_val, int base_value_val=5, string name_val="R");

    // Method to be reimplemented.
    vector<vector<int>> get_all_moves();

};

#endif