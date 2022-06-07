#include "gtest/gtest.h"
#include "src/lib/EmptySquare.h"

#include <string>

using std::string;

TEST(EmptySquareShould, HaveValue0){
    EmptySquare empty_square = EmptySquare("a3");
    double actual = empty_square.material_value;
    double expected = 0.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(EmptySquareShould, HaveEmptyName){
    EmptySquare empty_square = EmptySquare("a3");
    string actual = empty_square.name;
    string expected = " ";
    EXPECT_EQ(expected, actual);
}