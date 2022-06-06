#include "gtest/gtest.h"
#include "src/lib/Piece.h"

using std::invalid_argument;
using std::logic_error;

TEST(PieceShould, ReturnColor){
    Piece piece = Piece("white", "a3", 1);
    std::string actual = piece.get_color();
    std::string expected = "white";
    EXPECT_EQ(expected, actual);
}

TEST(PieceShould, SetCuttentSquare){
    Piece piece = Piece("white", "a3", 1);
    std::string actual = piece.current_square;
    std::string expected = "a3";
    EXPECT_EQ(expected, actual);
}

TEST(PieceShould, SetValue){
    Piece piece = Piece("white", "a3", 5);
    double actual = piece.material_value;
    double expected = 5.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PieceShould, SetValueForBlack){
    Piece piece = Piece("black", "a3", 5);
    double actual = piece.material_value;
    double expected = -5.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PieceShould, SetValueForNone){
    Piece piece = Piece("none", "a3", 5);
    double actual = piece.material_value;
    double expected = 0.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PieceShould, ThrowLogicError){
    Piece piece = Piece("white", "a3", 5);
    EXPECT_THROW(piece.get_all_moves(), logic_error);
}



