#ifndef _QUEEN_H
#define _QUEEN_H

#include "Piece.h"

class Queen: public Piece{
public:

    // Constructor with pawn-specific defaults.
    Queen(string current_square_val, string color_val, int base_value_val=9, string name_val="Q");

    // Method to be reimplemented.
    vector< vector< int > > get_all_moves();

};

#endif