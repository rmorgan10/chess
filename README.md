# Chess

My attempt at learning C++ through creating a playable chess game.

## C++ Template Repo Credit

This repo contains the example file structure discussed in https://www.ratanparai.com/c++/writing-unit-tests-with-bazel/

## Objects

- Piece
  - Pawn
  - Knight
  - Bishop
  - Rook
  - Queen
  - King
  - Empty Square
- Board
- Game

### Piece 

The base class for all chess pieces. 
Might just do it without a formal base class and just implement all the pieces.
Use a unit test to test all pieces for "pieceness."

**Attributes**
- "color" White, black, or none
- "color_multiplier" set when color is set; 1 for white, -1 for black, 0 for none
- "base_value" Raw material value of the piece
- "current_square" Name of square currently occupied

**Piece-specific methods**
- Constructor to set all the attributes
- "get_all_moves" Uses current square to determine all possible places a peice can move, returning a vector of square names.

### Board

The board will be implemented as a two-dimensional array of Piece objects with shape (8, 8).
It will also support element access through chess notation.

**Attributes**
- "board" The underlying array holding the pieces (public)
- "name_map" A lookup table / hash map of chess square names to board indices (private)

**Methods**
- "get_square" Takes a string argument of a chess square name and returns the object at that location on the board.

### Game

The Game will do most of the work in this program.
It's responsibilities are:
- Initialize the board and pieces
- Move the pieces
- Track all moves so far
- Undo a move
- Redo an undone move
- Enforce chess rules to trim all the possible moves of the pieces to legal moves
- Determine when the game has ended
- Optionally evaluate the position
- If playing against the computer, recommend a move by ranking all possible moves using a truncated move tree
- Produce a PGN for portability to other chess software
- Set up a board from a PGN
- User interface to receive moves and commands
- Display the current position