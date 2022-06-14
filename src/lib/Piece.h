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
    Piece(string current_square_val, string color_val, int base_value_val, string name_val);
    Piece();

    // Methods.
    vector< vector< int > > get_all_moves();
    
    
};

#endif