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
    board = new CBoard[3][3];
}

void CGame::initialize()
{
    board->setRows(3);
    board->setColumns(3);   
}

void CGame::play()
{

}

CGame::~CGame()
{

}
//Methods

//Destructors
