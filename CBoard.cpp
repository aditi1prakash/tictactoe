/*!
 * @file CBoard.cpp
 * @details Source file for board class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#include "CBoard.h"

CBoard::CBoard(int rows, int columns):
    m_rows{rows}, m_columns{columns}
{
    //2D vector initialization!!!
    m_boardVector = {3, std::vector<uint8_t>(3, DEFAULT_BOARD_CHAR)}; 
}

void CBoard::print()
{
    std::cout << std::endl;
    /*Iterate over all the rows and columns and print the board*/
    for(int row = 0; row < m_rows; row++)
    {
        for(int column = 0; column < m_columns; column++)
        {
            std::cout << m_boardVector.at(row).at(column) << " ";   
        }
        std::cout << std::endl;
    }
}

bool CBoard::isPositionEmpty (int row, int column)
{
    /*Board is empty if the position still has the default board character*/
    if (m_boardVector.at(row).at(column) == DEFAULT_BOARD_CHAR)
        return true;
    else    
        return false;
}

void CBoard::setElementAt (int row, int column, char element)
{
    m_boardVector.at(row).at(column) = element;
}

char CBoard::getElementAt (int row, int column) const
{
    return m_boardVector.at(row).at(column);
}

CBoard::~CBoard()
{}
