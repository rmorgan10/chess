#include "Rook.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

Rook::Rook(string current_square_val, string color_val, int base_value_val, string name_val)
    : Piece(current_square_val, color_val, base_value_val, name_val) {}

vector< vector< int > > Rook::get_all_moves(){
    vector< vector< int > > moves = { 
        {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6}, {0,7},
        {0,-1}, {0,-2}, {0,-3}, {0,-4}, {0,-5}, {0,-6}, {0,-7}, 
        {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0},
        {-1,0}, {-2,0}, {-3,0}, {-4,0}, {-5,0}, {-6,0}, {-7,0}
    };
    return moves;
}