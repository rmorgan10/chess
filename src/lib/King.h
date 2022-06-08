#ifndef _KING_H
#define _KING_H

#include "Piece.h"

class King: public Piece{
public:

    // Constructor with pawn-specific defaults.
    King(string current_square_val, string color_val, int base_value_val=250, string name_val="K");

    // Method to be reimplemented.
    vector<vector<int>> get_all_moves();

};

#endif