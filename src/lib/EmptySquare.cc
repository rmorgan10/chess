#include "EmptySquare.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

EmptySquare::EmptySquare(string current_square_val, string color_val, int base_value_val, string name_val)
    : Piece(current_square_val, color_val, base_value_val, name_val) {}

vector<vector<int>> EmptySquare::get_all_moves(){
    vector<vector<int>> moves = {  };
    return moves;
}