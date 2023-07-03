/*!
 * @file CPosition.cpp
 * @details Class to denote a position on the board
 * @author Aditi Prakash
 * @date 08-05-2023
 */

#include "CPosition.h"

CPosition::CPosition() {}

CPosition::CPosition(int row, int column):m_row{row}, m_column{column}
{}

int CPosition::getRow() const
{
    return m_row;
}

int CPosition::getColumn() const
{
    return m_column;
}
    
CPosition::~CPosition() {}