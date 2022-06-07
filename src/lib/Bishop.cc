#include "Bishop.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

Bishop::Bishop(string color_val, string current_square_val, int base_value_val, string name_val)
    : Piece(color_val, current_square_val, base_value_val, name_val) {}

vector<vector<int>> Bishop::get_all_moves(){
    vector<vector<int>> moves = { 
        {-7,-7}, {-6,-6}, {-5,-5}, {-4,-4}, {-3,-3}, {-2,-2}, {-1,-1},
        {7,7}, {6,6}, {5,5}, {4,4}, {3,3}, {2,2}, {1,1},
        {-7,7}, {-6,6}, {-5,5}, {-4,4}, {-3,3}, {-2,2}, {-1,1},
        {7,-7}, {6,-6}, {5,-5}, {4,-4}, {3,-3}, {2,-2}, {1,-1} };
        
    return moves;
}