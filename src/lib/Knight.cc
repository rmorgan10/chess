#include "Knight.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

Knight::Knight(string color_val, string current_square_val, int base_value_val, string name_val)
    : Piece(color_val, current_square_val, base_value_val, name_val) {}

vector<vector<int>> Knight::get_all_moves(){
    vector<vector<int>> moves = { 
        {-2,-1}, {-1,-2}, {1,2}, {2,1}, {2,-1}, {1,-2}, {2,-1}, {1,-2} };
    return moves;
}