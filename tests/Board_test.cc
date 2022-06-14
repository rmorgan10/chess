#include "gtest/gtest.h"
#include "src/lib/Board.h"
#include "src/lib/Piece.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class BoardTest: public ::testing::Test {
    protected:
        Board b = Board();
};

TEST_F(BoardTest, ReturnCorrectSquare){
    string square_name {"a3"};
    vector<int> square_idx;
    square_idx = b.get_square(square_name);
    ASSERT_EQ(5, square_idx[0]);
    ASSERT_EQ(0, square_idx[1]);
}

TEST_F(BoardTest, HaveAWhiteKnightOnG1){
    Piece g2_piece = b.get_square_member("g1");
    EXPECT_EQ("N", g2_piece.name);
    EXPECT_EQ("white", g2_piece.color);
}

TEST_F(BoardTest, ShowBoard){
    testing::internal::CaptureStdout();
    b.display_board();
    string output = testing::internal::GetCapturedStdout();
    string expected = R""""( -------------------------------- 
 | R | N | B | Q | K | B | N | R | 
 -------------------------------- 
 | P | P | P | P | P | P | P | P | 
 -------------------------------- 
 |   |   |   |   |   |   |   |   | 
 -------------------------------- 
 |   |   |   |   |   |   |   |   | 
 -------------------------------- 
 |   |   |   |   |   |   |   |   | 
 -------------------------------- 
 |   |   |   |   |   |   |   |   | 
 -------------------------------- 
 | P | P | P | P | P | P | P | P | 
 -------------------------------- 
 | R | N | B | Q | K | B | N | R | 
 -------------------------------- 
)"""";
    ASSERT_EQ(expected, output);
}
