#include "gtest/gtest.h"
#include "src/lib/Bishop.h"

#include <string>

using std::string;

TEST(BishopShould, HaveValue3){
    Bishop bishop = Bishop("a3", "white");
    double actual = bishop.material_value;
    double expected = 3.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(BishopShould, HaveNameB){
    Bishop bishop = Bishop("a3", "black");
    string actual = bishop.name;
    string expected = "B";
    EXPECT_EQ(expected, actual);
}