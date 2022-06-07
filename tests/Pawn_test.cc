#include "gtest/gtest.h"
#include "src/lib/Pawn.h"

#include <string>

using std::string;

TEST(PawnShould, HaveValue1){
    Pawn pawn = Pawn("a3", "white");
    double actual = pawn.material_value;
    double expected = 1.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PawnShould, HaveNameP){
    Pawn pawn = Pawn("a3", "black");
    string actual = pawn.name;
    string expected = "P";
    EXPECT_EQ(expected, actual);
}