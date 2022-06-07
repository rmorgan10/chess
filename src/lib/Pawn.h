#ifndef _PAWN_H
#define _PAWN_H

#include "Piece.h"

class Pawn: public Piece{
public:

    // Constructor with pawn-specific defaults.
    Pawn(string color_val, string current_square_val, int base_value_val=1, string name_val="P");

    // Method to be reimplemented.
    vector<vector<int>> get_all_moves();

};

#endif