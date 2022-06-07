#ifndef _EMPTYSQUARE_H
#define _EMPTYSQUARE_H

#include "Piece.h"

class EmptySquare: public Piece{
public:

    // Constructor with pawn-specific defaults.
    EmptySquare(string current_square_val, string color_val="none", int base_value_val=0, string name_val=" ");

    // Method to be reimplemented.
    vector<vector<int>> get_all_moves();

};

#endif