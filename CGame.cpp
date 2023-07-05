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
    this->_init();
}

void CGame::_init()
{
    m_board = new CBoard(3,3);              /* Initialize the board object with dimensions of the board */
    m_player[0] = new CPlayer(m_board);     /* Players play the game on the same board, hence passing the m_board pointer to player objects */
    m_player[1] = new CPlayer(m_board);
}

void CGame::play()
{
    /*TODO: Request character from users and set the value*/
    m_player[0]->setStoneChar('o');
    m_player[1]->setStoneChar('x');
 
    /*Print the board with default characters before the game starts*/
    m_board->print(); 

    int row_number{0};
    int column_number{0};

    /*Iterate for 9 times = number of positions on the board*/
    for(int moves = 0; moves < NUMBER_OF_MOVES; moves++)
    {
        /*Read the row and column where the player wishes to place their stone*/
        std::cout << "Enter position to place your stone (row column): ";
        std::cin >> row_number >> column_number;            /*TODO: Read position instead of individual row and column variables, might require operator overloading*/

        CPosition position{row_number, column_number};

        if (m_board->isPositionEmpty(row_number, column_number))
        {   
            /*Alternate between the two players*/
            if(moves % 2 == 0)
            {
                m_player[0]->placeStone(position);
            }
            else
            {
                m_player[1]->placeStone(position);
            }
        }
        else
        {
            /* TODO : Handle the wrong position input in a better way */
            std::cout << "You lost your move, enter the correct position next time \n And, for the programmer: Write better code!";
        }
        
        if (_winnerAvailable())
        {
            /*End the loop if there is a winner*/
            break;
        }
        else if (moves == (NUMBER_OF_MOVES - 1))
        {   
            /*Check for tie, for the last move*/
            std::cout << "It is a tie!!";
        }
    }
}

char CGame::_checkWinner()
{
    /* Check both the diagonals */
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
       /* do nothing */
    }
    
    /* Check rows - Iterate through the rows and compare the elements*/
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

    /* Check columns - Iterate through the columns and compare the elements*/
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

bool CGame::_winnerAvailable()
{   
    char result = this->_checkWinner();

    /*Check which player won*/
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
        return false;
    }
    return true;
}

CGame::~CGame()
{}

/* Extra code
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
    for (int i = 0; i < m_board->getColumns(); i++)
    {
        if ((m_board->getElementAt(0,i) == m_board->getElementAt(1,i)) && 
            (m_board->getElementAt(0,i) == m_board->getElementAt(2,i)))
        {
            return m_board->getElementAt(0,i);
        }
        else{}
    }
    return DEFAULT_BOARD_CHAR;
}

char CGame::_checkRows()
{
    for (int i = 0; i < m_board->getRows(); i++)
    {
        if ((m_board->getElementAt(i,0) == m_board->getElementAt(i,1)) && 
            (m_board->getElementAt(i,0) == m_board->getElementAt(i,2)))
        {
            return m_board->getElementAt(i,0);
        }
        else{}
    }
    return DEFAULT_BOARD_CHAR;
}
*/