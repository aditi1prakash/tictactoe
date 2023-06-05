/*!
 * @file CBoard.cpp
 * @details Source file for board class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#include "CBoard.h"

#define NUMBER_OF_ROWS      3
#define NUMBER_OF_COLUMNS   3

CBoard::CBoard()
{
    m_boardChar = '#';
    this->m_rows = NUMBER_OF_ROWS;
    this->m_columns = NUMBER_OF_COLUMNS;
}

uint8_t CBoard::getRows() const
{
    return m_rows;
}

uint8_t CBoard::getColumns() const
{
    return m_columns;
}

void CBoard::setRows(uint8_t rows)
{
    this->m_rows = rows;
}

void CBoard::setColumns(uint8_t columns)
{
    this->m_columns = columns;
}

void CBoard::print()
{
    std::cout << std::endl;
    
    for(int row = 0; row < m_rows; row++)
    {
        for(int column = 0; column < m_columns; column++)
        {
            std::cout << m_boardChar << " ";
        }
        std::cout << std::endl;
    }
}

bool CBoard::isPositionEmpty(uint8_t row, uint8_t column)
{
    return true;
}

CBoard::~CBoard()
{}
