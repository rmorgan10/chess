#include "gtest/gtest.h"
#include "src/lib/Pawn.h"

#include <string>

using std::string;

TEST(PawnShould, HaveValue1){
    Pawn pawn = Pawn("white", "a3");
    double actual = pawn.material_value;
    double expected = 1.0;
    EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(PawnShould, HaveNameP){
    Pawn pawn = Pawn("black", "a3");
    string actual = pawn.name;
    string expected = "P";
    EXPECT_EQ(expected, actual);
}