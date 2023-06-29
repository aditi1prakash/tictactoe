/*!
 * @file CBoard.cpp
 * @details Source file for board class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#include "CBoard.h"

#define NUMBER_OF_ROWS      3
#define NUMBER_OF_COLUMNS   3


CBoard::CBoard(uint8_t rows, uint8_t columns):
    m_rows{rows}, m_columns{columns}
{
    //2D vector initialization!!!
    m_board = {3, std::vector<char>(3, DEFAULT_BOARD_CHAR)}; 
}

void CBoard::print()
{
    std::cout << std::endl;
    
    for(int row = 0; row < m_rows; row++)
    {
        for(int column = 0; column < m_columns; column++)
        {
            std::cout << m_board.at(row).at(column) << " ";  //TODO: Complete the logic to access board with a 2D 
        }
        std::cout << std::endl;
    }
}

bool CBoard::isPositionEmpty (uint8_t row, uint8_t column)
{
    if (m_board.at(row).at(column) == DEFAULT_BOARD_CHAR)
        return true;
    else    
        return false;
}

void CBoard::setElementAt (uint8_t row, uint8_t column, char element)
{
    m_board.at(row).at(column) = element;
}

CBoard::~CBoard()
{}
