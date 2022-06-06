#ifndef _PIECE_H
#define _PIECE_H

#include <string>
#include <vector>
#include <unordered_map>

using std::string;
using std::vector;

class Piece {
public:
    double material_value;
    string current_square;

    string get_color();
    vector<string> get_all_moves();

    Piece(string color_val, string current_square_val, int base_value_val);

private:
    string color;
    int base_value;
    
};

#endif