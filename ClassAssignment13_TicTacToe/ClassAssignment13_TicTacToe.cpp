//Does not play as a game, but a a demonstration of multidimensional arrays :)

#include<iostream>

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = { {'O', 'X', 'O'},          //declaring and initializing multidimensional array.
                                  {' ', 'X', 'X'},
                                  {'X', 'O', 'O'} };

    std::cout << "Here's the tic-tac-toe board: \n\n";
    for (int i = 0; i < ROWS; ++i) {                        //Displaying array using a nested for loop.
        for (int j = 0; j < COLUMNS; ++j) {
            std::cout << board[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "\n'X' moves to the empty location.\n\n";
    board[1][0] = 'X';                                      //indexing a value into the array in the second row. Remember, arrays start at row 0; so 1 is row 2. Following? Good.

    std::cout << "Now the tic-tac-toe board is: \n\n";
    for (int i = 0; i < ROWS; ++i) {                        //Redisplaying updated array.
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << board[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "\nX wins!!\n\n";

    system("pause");
    return 0;
}
