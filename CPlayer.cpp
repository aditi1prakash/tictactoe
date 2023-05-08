/*!
 * @file CPlayer.cpp
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#include "CPlayer.h"

CPlayer::CPlayer()
{}

unsigned char CPlayer::getPlayerChar() const
{
    return m_playerChar;
}

void CPlayer::setPlayerChar(unsigned char playerChar)
{
    this->m_playerChar = playerChar;
}

CPlayer::~CPlayer()
{}