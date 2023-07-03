/*!
 * @file CBoard.cpp
 * @details Source file for board class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#include "CBoard.h"

#define NUMBER_OF_ROWS      3
#define NUMBER_OF_COLUMNS   3


CBoard::CBoard(int rows, int columns):
    m_rows{rows}, m_columns{columns}
{
    //2D vector initialization!!!
    m_boardVector = {3, std::vector<uint8_t>(3, DEFAULT_BOARD_CHAR)}; 
}

void CBoard::print()
{
    std::cout << std::endl;
    
    for(int row = 0; row < m_rows; row++)
    {
        for(int column = 0; column < m_columns; column++)
        {
            std::cout << m_boardVector.at(row).at(column) << " ";  //TODO: Complete the logic to access board with a 2D 
        }
        std::cout << std::endl;
    }
}

bool CBoard::isPositionEmpty (int row, int column)
{
    // std::cout << "Checking for empty position" << std::endl;
    // std::cout << row << " " << column;

    if (m_boardVector.at(row).at(column) == DEFAULT_BOARD_CHAR)
        return true;
    else    
        return false;
}

void CBoard::setElementAt (int row, int column, char element)
{
    m_boardVector.at(row).at(column) = element;
}

char CBoard::getElementAt (int row, int column)
{
    return m_boardVector.at(row).at(column);
}

CBoard::~CBoard()
{}
