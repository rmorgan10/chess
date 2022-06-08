#include "Pawn.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

Pawn::Pawn(string current_square_val, string color_val, int base_value_val, string name_val)
    : Piece(current_square_val, color_val, base_value_val, name_val) {}

vector<vector<int>> Pawn::get_all_moves(){
    vector<vector<int>> moves = { {1,0}, {2,0}, {1,-1}, {1,1}, {-1,0}, {-2,0}, {-1,-1}, {-1,1} };
    return moves;
}