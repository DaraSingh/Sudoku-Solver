# Sudoku-Solver 

## Description

Welcome to the Sudoku game! The game implements the following features

+ Displays a 9x9 sudoku board

  - The board is randomized for every game
  - The user may specify the number of empty slots for the board (default is 25)

+ Shows the solution to the board

  - Utilizes a backtracking algorithm to solve the board
  - Solution investigates row, column, and 3x3 square to input a valid number

+ Uses a GUI to visually show the board and solution

  - User is able to play a game of sudoku by inputting numbers to empty slots
  - User is able to see how backtracking seeks for a solution

## Rules

Rules of the Sudoku game in the link : https://sudoku.com/how-to-play/sudoku-rules-for-complete-beginners/

1. All slots in red can be altered, select one of the slots to start
2. Press a number to change the number in the slot, or press clear to restart
3. If stuck, press the solution button to see how backtracking reaches a solution!

## How It Works

This particular algorithm employs the use of backtracking, one of the more common methods to solve Sudoku puzzles. I've written a simple algorithm to give an idea of how the program works.

1. Start.
2. We start with the first empty cell.
3. We generate a list of possible valid values that can be filled in that cell.
4. We iterate over this list and start with the first value. This value is placed in the required cell.
5. We move on to the next cell. We again generate a list of possibilities. However, if no list can be generated, then this means that there is something wrong with the value of the previous cell.
6. We then move back to the previous cell and place the next value on the generated list in the cell now. We repeat this step until the current cell has a valid value placed inside it.
7. We stop when we reach the 81st cell (the last cell in a Sudoku puzzle) and have placed a valid value.
8. The puzzle has now been solved.
9. Stop.
