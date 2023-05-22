/*!
 * @file CBoard.cpp
 * @details Source file for board class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#include "CBoard.h"

CBoard::CBoard(uint8_t rows, uint8_t columns):m_rows{rows},m_columns{columns}
{
    boardChar = '#';
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
    for(int row = 0; row < m_rows; row++)
    {
        for(int column = 0; column < m_columns; column++)
        {
            std::cout << boardChar << " ";
        }
        std::endl;
    }
}

CBoard::~CBoard()
{}
