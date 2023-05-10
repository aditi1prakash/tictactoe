/*!
 * @file CBoard.cpp
 * @details Source file for board class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#include "CBoard.h"

CBoard::CBoard(){}

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

CBoard::~CBoard()
{}
