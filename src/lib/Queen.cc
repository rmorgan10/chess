#include "Queen.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

Queen::Queen(string current_square_val, string color_val, int base_value_val, string name_val)
    : Piece(current_square_val, color_val, base_value_val, name_val) {}

vector<vector<int>> Queen::get_all_moves(){
    vector<vector<int>> moves = { 
        {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6}, {0,7},
        {0,-1}, {0,-2}, {0,-3}, {0,-4}, {0,-5}, {0,-6}, {0,-7}, 
        {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0},
        {-1,0}, {-2,0}, {-3,0}, {-4,0}, {-5,0}, {-6,0}, {-7,0},
        {-7,-7}, {-6,-6}, {-5,-5}, {-4,-4}, {-3,-3}, {-2,-2}, {-1,-1},
        {7,7}, {6,6}, {5,5}, {4,4}, {3,3}, {2,2}, {1,1},
        {-7,7}, {-6,6}, {-5,5}, {-4,4}, {-3,3}, {-2,2}, {-1,1},
        {7,-7}, {6,-6}, {5,-5}, {4,-4}, {3,-3}, {2,-2}, {1,-1}
     };
    return moves;
}