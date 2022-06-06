#include "Piece.h"

using std::invalid_argument;
using std::logic_error;

Piece::Piece(string color_val, string current_square_val, int base_value_val)
    : color{color_val}, current_square{current_square_val}, base_value{base_value_val} {
    
    // Set value based on color.
    if (color_val == "white") {
        material_value = 1.0 * base_value;
    }
    else if (color_val == "black") {
        material_value = -1.0 * base_value;
    }
    else if (color_val == "none") {
        material_value = 0.0 * base_value;
    }
    else {
        throw invalid_argument("Color argument must be white, black, or none");
    }
}

string Piece::get_color() {
    return color;
}

vector<string> Piece::get_all_moves(){
    throw logic_error("Function not yet implemented");
}