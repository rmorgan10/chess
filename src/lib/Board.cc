#include "Bishop.h"
#include "Board.h"
#include "EmptySquare.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Piece.h"
#include "Queen.h"
#include "Rook.h"

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unordered_map;

Board::Board() {

    // Initialize board attribute with pieces.
    row_8 = {new Rook(square_names[0][0], "black"), new Knight(square_names[0][1], "black"), new Bishop(square_names[0][2], "black"), new Queen(square_names[0][3], "black"), new King(square_names[0][4], "black"), new Bishop(square_names[0][5], "black"), new Knight(square_names[0][6], "black"), new Rook(square_names[0][7], "black")};
    row_7 = {new Pawn(square_names[1][0], "black"), new Pawn(square_names[1][1], "black"), new Pawn(square_names[1][2], "black"), new Pawn(square_names[1][3], "black"), new Pawn(square_names[1][4], "black"), new Pawn(square_names[1][5], "black"), new Pawn(square_names[1][6], "black"), new Pawn(square_names[1][7], "black")};
    row_6 = {new EmptySquare(square_names[2][0]), new EmptySquare(square_names[2][1]), new EmptySquare(square_names[2][2]), new EmptySquare(square_names[2][3]), new EmptySquare(square_names[2][4]), new EmptySquare(square_names[2][5]), new EmptySquare(square_names[2][6]), new EmptySquare(square_names[2][7])};
    row_5 = {new EmptySquare(square_names[3][0]), new EmptySquare(square_names[3][1]), new EmptySquare(square_names[3][2]), new EmptySquare(square_names[3][3]), new EmptySquare(square_names[3][4]), new EmptySquare(square_names[3][5]), new EmptySquare(square_names[3][6]), new EmptySquare(square_names[3][7])};
    row_4 = {new EmptySquare(square_names[4][0]), new EmptySquare(square_names[4][1]), new EmptySquare(square_names[4][2]), new EmptySquare(square_names[4][3]), new EmptySquare(square_names[4][4]), new EmptySquare(square_names[4][5]), new EmptySquare(square_names[4][6]), new EmptySquare(square_names[4][7])};
    row_3 = {new EmptySquare(square_names[5][0]), new EmptySquare(square_names[5][1]), new EmptySquare(square_names[5][2]), new EmptySquare(square_names[5][3]), new EmptySquare(square_names[5][4]), new EmptySquare(square_names[5][5]), new EmptySquare(square_names[5][6]), new EmptySquare(square_names[5][7])};
    row_2 = {new Pawn(square_names[6][0], "white"), new Pawn(square_names[6][1], "white"), new Pawn(square_names[6][2], "white"), new Pawn(square_names[6][3], "white"), new Pawn(square_names[6][4], "white"), new Pawn(square_names[6][5], "white"), new Pawn(square_names[6][6], "white"), new Pawn(square_names[6][7], "white")};
    row_1 = {new Rook(square_names[7][0], "white"), new Knight(square_names[7][1], "white"), new Bishop(square_names[7][2], "white"), new Queen(square_names[7][3], "white"), new King(square_names[7][4], "white"), new Bishop(square_names[7][5], "white"),new  Knight(square_names[7][6], "white"), new Rook(square_names[7][7], "white")};

    board = {row_8, row_7, row_6, row_5, row_4, row_3, row_2, row_1};

    // Set the square_map lookup table.
    square_map = {
        {"a1", {7,0}}, {"a2", {6,0}}, {"a3", {5,0}}, {"a4", {4,0}}, {"a5", {3,0}}, {"a6", {2,0}}, {"a7", {1,0}}, {"a8", {0,0}},
        {"b1", {7,1}}, {"b2", {6,1}}, {"b3", {5,1}}, {"b4", {4,1}}, {"b5", {3,1}}, {"b6", {2,1}}, {"b7", {1,1}}, {"b8", {0,1}},
        {"c1", {7,2}}, {"c2", {6,2}}, {"c3", {5,2}}, {"c4", {4,2}}, {"c5", {3,2}}, {"c6", {2,2}}, {"c7", {1,2}}, {"c8", {0,2}},
        {"d1", {7,3}}, {"d2", {6,3}}, {"d3", {5,3}}, {"d4", {4,3}}, {"d5", {3,3}}, {"d6", {2,3}}, {"d7", {1,3}}, {"d8", {0,3}},
        {"e1", {7,4}}, {"e2", {6,4}}, {"e3", {5,4}}, {"e4", {4,4}}, {"e5", {3,4}}, {"e6", {2,4}}, {"e7", {1,4}}, {"e8", {0,4}},
        {"f1", {7,5}}, {"f2", {6,5}}, {"f3", {5,5}}, {"f4", {4,5}}, {"f5", {3,5}}, {"f6", {2,5}}, {"f7", {1,5}}, {"f8", {0,5}},
        {"g1", {7,6}}, {"g2", {6,6}}, {"g3", {5,6}}, {"g4", {4,6}}, {"g5", {3,6}}, {"g6", {2,6}}, {"g7", {1,6}}, {"g8", {0,6}},
        {"h1", {7,7}}, {"h2", {6,7}}, {"h3", {5,7}}, {"h4", {4,7}}, {"h5", {3,7}}, {"h6", {2,7}}, {"h7", {1,7}}, {"h8", {0,7}}
    };
}

vector<int> Board::get_square(string square_name) {
    return square_map.at(square_name);
}

Piece Board::get_square_member(string square_name) {
    vector<int> idx = get_square(square_name);
    return *board[idx[0]][idx[1]];
}

void Board::display_board() {
    cout << " -------------------------------- " << endl;
    for (int row {0}; row < 8; ++row) {
        for (int col {0}; col < 8; ++col) {
            Piece tmp = *board[row][col];
            cout << " | " << tmp.name;
        }
        cout <<  " | " << endl << " -------------------------------- " << endl;
    }
}