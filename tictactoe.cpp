#include <iostream>

#include "CGame.h"

int main()
{
    std::cout << "Hello world!";

    CGame game;
    game.play();

    return 0;
}

/*
 * TODO's
 * 1. Use case for tie -- logic available, debug
 * 2. Update comments
 * 3. Doxygen
 * 4. Write test cases, test
 *      a. Validity of all positions on the board 
 *      b. Check logic for row, column, and diagonals for all possible combinations
 *      c. Winner declaration for all cases
 *      d. Tie declaration
 * 5. Design update: Use position class instead of using row, column separately
*/