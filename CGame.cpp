/*!
 * @file CGame.cpp
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#include "CGame.h"

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
    /* 
     * Create two players
     * Select stone for each player
     * Print the empty board
     * 
     * 9 moves - for loop
     * Request for position from each player
     * Check if the position is empty
     * Place the stone if yes, else request for a new position
     * 
     * Check the winner after each iteration - how?
     */
}

CGame::~CGame()
{

}
//Methods

//Destructors
