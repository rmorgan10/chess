#include "gtest/gtest.h"
#include "src/lib/Knight.h"

#include <string>

using std::string;

TEST(KnightShould, HaveValue3){
    Knight knight = Knight("white", "a3");
    double actual = knight.material_value;
    double expected = 3.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(KnightShould, HaveNameN){
    Knight knight = Knight("black", "a3");
    string actual = knight.name;
    string expected = "N";
    EXPECT_EQ(expected, actual);
}