/*!
 * @file CGame.cpp
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#include "CGame.h"

static const int NUMBER_OF_MOVES {5};       /*! @brief Number of moves in the game */

//Constructor
CGame::CGame()
{
    initialize();
}

void CGame::initialize()
{
    m_board = new CBoard();  
    m_player[0] = new CPlayer();
    m_player[1] = new CPlayer();
}

void CGame::play()
{
    m_player[0]->setStoneChar('o');
    m_player[1]->setStoneChar('x');

    m_board->print(); 

    uint8_t row_number{0};
    uint8_t column_number{0};

    std::cout << "Player 1 starts the game";

    for(int moves = 0; moves < NUMBER_OF_MOVES; moves++)
    {
        /*Read the row and column where the player wishes to place their stone*/
        std::cout << "Enter the row number: ";
        std::cin >> row_number;

        std::cout << std::endl << "Enter the column number: ";
        std::cin >> column_number;

        if (m_board->isPositionEmpty(row_number, column_number))
        {
            /*Player 1 is making the move*/
            if(moves % 2 == 0)
            {
                m_player[0]->placeStone();
            }
            else
            {
                m_player[1]->placeStone();
            }
        }
        else
        {
            /* TODO : Handle the wrong position input in a better way */
            std::cout << "You lost your move, enter the correct position next time \n And, for the programmer: Write better code!";
        }
        
        checkWinner();
    }
}

void CGame::checkWinner()
{
    std::cout << "Checking winner" << std::endl;
}

void CGame::printBoard()
{
    
}

CGame::~CGame()
{

}
//Methods

//Destructors
