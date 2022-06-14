#ifndef _BOARD_H
#define _BOARD_H

#include <unordered_map>
#include <string>
#include <vector>

#include "Piece.h"

using std::unordered_map;
using std::string;
using std::vector;


class Board {
public:

    // Attributes.
    vector< vector< Piece* > > board;
    string square_names[8][8] = {
        {"a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8"},
        {"a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7"},
        {"a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6"},
        {"a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5"},
        {"a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4"},
        {"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"},
        {"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"},
        {"a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1"}
    };;

    // Constructor for new position.
    Board();

    // Methods.
    void display_board();
    vector<int> get_square(string square_name);
    Piece get_square_member(string square_name);

private:
    unordered_map<string, vector< int > > square_map;

    vector< Piece* > row_8;
    vector< Piece* > row_7;
    vector< Piece* > row_6;
    vector< Piece* > row_5;
    vector< Piece* > row_4;
    vector< Piece* > row_3;
    vector< Piece* > row_2;
    vector< Piece* > row_1;

};

#endif