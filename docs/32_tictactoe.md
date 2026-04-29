# 32 Tic Tac Toe Game

# Goal
Creating a Tic Tac Toe game inside the console from scratch

# Code
Look: `src/32_tictactoe.cpp`

# Notes
- `while` = Used with a`bool` "running" to make the game end the moment a win condition triggers
- The `bool CheckTie(char *spaces)` function is the most interesting. The logic is: The code itself would always trigger a tie if you let it run because it always returns true. But it is stuck returning false and giving the `bool CheckWinner(char *spaces, char player, char computer)` function enough time to trigger first making the tie-function never truly return true!
