#include "gtest/gtest.h"
#include "src/lib/Queen.h"

#include <string>

using std::string;

TEST(QueenShould, HaveValue9){
    Queen queen = Queen("a3", "white");
    double actual = queen.material_value;
    double expected = 9.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(QueenShould, HaveNameQ){
    Queen queen = Queen("a3", "black");
    string actual = queen.name;
    string expected = "Q";
    EXPECT_EQ(expected, actual);
}