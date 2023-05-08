/*!
 * @file CPosition.cpp
 * @details Class to denote a position on the board
 * @author Aditi Prakash
 * @date 08-05-2023
 */

#include "CPosition.h"

CPosition::CPosition(uint8_t row, uint8_t column):m_row{row}, m_column{column}
{

}

std::uint8_t CPosition::getRow() const
{
    return  m_row;
}

std::uint8_t CPosition::getColumn() const
{
    return m_column;
}
    
