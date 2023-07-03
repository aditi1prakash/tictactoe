/*!
 * @file CGame.cpp
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#include "CGame.h"
#include "CPosition.h"

static const int NUMBER_OF_MOVES {9};       /*! @brief Number of moves in the game */

//Constructor
CGame::CGame()
{
    initialize();
}

void CGame::initialize()
{
    m_board = new CBoard(3,3);  
    m_player[0] = new CPlayer(m_board);
    m_player[1] = new CPlayer(m_board);
}

void CGame::play()
{
    m_player[0]->setStoneChar('o');
    m_player[1]->setStoneChar('x');
    // m_player[0]->m_board = this->m_board;   //Option1: Assign game class board object to player class board object
    //Option 2: Pass the board object while creating the players

    m_board->print(); 

    int row_number{0};
    int column_number{0};

    std::cout << "Player 1 starts the game" << std::endl;

    for(int moves = 0; moves < NUMBER_OF_MOVES; moves++)
    {
        /*Read the row and column where the player wishes to place their stone*/
        std::cout << "Enter position to place your stone (row column): ";
        std::cin >> row_number >> column_number;

        CPosition position{row_number, column_number};

        if (m_board->isPositionEmpty(row_number, column_number))
        {
            // std::cout << "Entering if loop" << std::endl;
            /*Player 1 is making the move*/
            if(moves % 2 == 0)
            {
                // std::cout << "Player1 placing stone" << std::endl;
                m_player[0]->placeStone(position);
            }
            else
            {
                // std::cout << "Player2 placing stone" << std::endl;
                m_player[1]->placeStone(position);
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
char CGame::_checkDiagonals()
{
    if ((m_board->getElementAt(0, 0) == m_board->getElementAt(1, 1)) && (m_board->getElementAt(0, 0) == m_board->getElementAt(2, 2)))
    {
        return m_board->getElementAt(1, 1);
    }
    else if ((m_board->getElementAt(0, 2) == m_board->getElementAt(1, 1)) && (m_board->getElementAt(0, 2) == m_board->getElementAt(2, 0)))
    {
        return m_board->getElementAt(1, 1);
    }
    else
    {
        return DEFAULT_BOARD_CHAR;
    }
}

char CGame::_checkColumns()
{
    /*Iterate through the columns and compare the elements*/
    for (int i = 0; i < m_board->getColumns(); i++)
    {
        if ((m_board->getElementAt(0,i) == m_board->getElementAt(1,i)) && 
            (m_board->getElementAt(0,i) == m_board->getElementAt(2,i)))
        {
            return m_board->getElementAt(0,i);
        }
        else
        {
            /* do nothing */
        }
    }
    return DEFAULT_BOARD_CHAR;
}

char CGame::_checkRows()
{
    /*Iterate through the rows and compare the elements*/
    for (int i = 0; i < m_board->getRows(); i++)
    {
        if ((m_board->getElementAt(i,0) == m_board->getElementAt(i,1)) && 
            (m_board->getElementAt(i,0) == m_board->getElementAt(i,2)))
        {
            return m_board->getElementAt(i,0);
        }
        else
        {
            /* do nothing */
        }
    }
    return DEFAULT_BOARD_CHAR;
}

void CGame::checkWinner()
{
    std::cout << "Checking winner" << std::endl;
    char result = _checkDiagonals();

    if (result == m_player[0]->getStoneChar())
    {
        std::cout << "Player1 wins!! Congratulations" << std::endl;
    }
    else if (result == m_player[1]->getStoneChar())
    {
        std::cout << "Player2 wins!! Congratulations" << std::endl;
    }
    else
    {
        /* do nothing */
    }
    
}

CGame::~CGame()
{

}
//Methods

//Destructors
