#include "gtest/gtest.h"
#include "src/lib/King.h"

#include <string>

using std::string;

TEST(KingShould, HaveValue250){
    King king = King("a3", "white");
    double actual = king.material_value;
    double expected = 250.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(KingShould, HaveNameK){
    King king = King("a3", "black");
    string actual = king.name;
    string expected = "K";
    EXPECT_EQ(expected, actual);
}