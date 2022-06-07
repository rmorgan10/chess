#include "gtest/gtest.h"
#include "src/lib/Piece.h"

#include<string>

using std::invalid_argument;
using std::logic_error;
using std::string;

TEST(PieceShould, ReturnColor){
    Piece piece = Piece("a3", "white", 1, "");
    string actual = piece.color;
    string expected = "white";
    EXPECT_EQ(expected, actual);
}

TEST(PieceShould, SetCuttentSquare){
    Piece piece = Piece("a3", "white", 1, "");
    string actual = piece.current_square;
    string expected = "a3";
    EXPECT_EQ(expected, actual);
}

TEST(PieceShould, SetMaterialValue){
    Piece piece = Piece("a3", "white", 5, "");
    double actual = piece.material_value;
    double expected = 5.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PieceShould, SetName){
    Piece piece = Piece("a3", "white", 5, "N");
    string actual = piece.name;
    string expected = "N";
    EXPECT_EQ(expected, actual);
}

TEST(PieceShould, SetValueForBlack){
    Piece piece = Piece("a3", "black", 5, "");
    double actual = piece.material_value;
    double expected = -5.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PieceShould, SetValueForNone){
    Piece piece = Piece("a3", "none", 5, "");
    double actual = piece.material_value;
    double expected = 0.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PieceShould, ThrowLogicError){
    Piece piece = Piece("a3", "white", 5, "");
    EXPECT_THROW(piece.get_all_moves(), logic_error);
}



