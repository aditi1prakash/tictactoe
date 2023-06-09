/*!
 * @file CPlayer.cpp
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#include "CPlayer.h"

CPlayer::CPlayer(CBoard* playerBoard)
    :m_board{playerBoard}{}

char CPlayer::getStoneChar() const
{
    return m_stoneChar;
}

void CPlayer::setStoneChar(char playerChar)
{
    this->m_stoneChar = playerChar;
}

void CPlayer::placeStone(CPosition position)
{
    std::cout << "Player stone: " << this->getStoneChar() << std::endl;

    m_board->setElementAt(position.getRow(),position.getColumn(), this->getStoneChar());
    m_board->print();
}

CPlayer::~CPlayer()
{}