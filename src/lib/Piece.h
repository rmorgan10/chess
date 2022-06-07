#ifndef _PIECE_H
#define _PIECE_H

#include <string>
#include <vector>
#include <unordered_map>

using std::string;
using std::vector;

class Piece {
public:
    // Attributes.
    int base_value;
    string color;
    string current_square;
    double material_value;
    string name;
    
    // Constructor.
    Piece(string color_val, string current_square_val, int base_value_val, string name_val);

    // Methods.
    vector<vector<int>> get_all_moves();
    
    
};

#endif