#include "gtest/gtest.h"
#include "src/lib/Rook.h"

#include <string>

using std::string;

TEST(RookShould, HaveValue5){
    Rook rook = Rook("a3", "white");
    double actual = rook.material_value;
    double expected = 5.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(RookShould, HaveNameR){
    Rook rook = Rook("a3", "black");
    string actual = rook.name;
    string expected = "R";
    EXPECT_EQ(expected, actual);
}