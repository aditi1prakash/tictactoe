/*!
 * @file CBoard.h
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#ifndef CBOARD_H_
#define CBOARD_H_

#include <iostream>
#include <vector>
#include "CPosition.h"

#define DEFAULT_BOARD_CHAR  '#'

class CBoard 
{
private:
    int m_rows;         /*! @brief Number of rows on the board*/
    int m_columns;      /*! @brief Number of columns on the board*/
    CPosition m_position;   /*! @brief Represents a particular position on the board*/
    std::vector<std::vector<uint8_t>> m_boardVector;   /*! @brief Array to represent board with size m_rows*m_columns */ //TODO: Improve array handling

//Create an array for with row and column parameters from within the constructor, 
//manipulate this array to maintain the player moves and stones

public:

    /*!
     * @brief Constructor CBoard class
     */
    CBoard(int rows, int columns);

    /*!
     * @brief Print the board
     * @details 
     * @param[IN] - None
     * @param[OUT] - None
     */
    void print();

    /*!
     * @brief Getter method for rows - const
     * @details 
     * @param[IN] 
     * @param[OUT] int - number of rows on the board
     */
    int getRows() const {return m_rows;}

    /*!
     * @brief Getter method for columns - const
     * @details 
     * @param[IN] 
     * @param[OUT] int - number of columns on the board
     */
    int getColumns() const {return m_columns;}
    
    /*!
     * @brief Setter method for rows
     * @details 
     * @param[IN] int - number of rows required for the board game
     * @param[OUT] 
     */
    void setRows(int rows){this->m_rows = rows;}
    
    /*!
     * @brief Setter method for columns
     * @details 
     * @param[IN] 
     * @param[OUT] int - number of columns required for the board game
     */
    void setColumns(int columns){this->m_columns = columns;}

    /*!
     * @brief Method to set the element at a particular position on the board
     * @details 
     * @param[IN] int row - Row position to set the element at
     * @param[IN] int column - Column position to set the element at
     * @param[IN] char element - Element to be set at the position
     * @param[OUT] None
     */
    void setElementAt(int row, int column, char element);

    /*!
     * @brief Method to get the element at a particular position on the board
     * @details 
     * @param[IN] int row - Row position to set the element at
     * @param[IN] int column - Column position to set the element at
     * @param[OUT] char - Stone character at the position
     */
    char getElementAt(int row, int column);

    /*!
     * @brief Setter method for columns
     * @details 
     * @param[IN] int row - Row position to set the element at
     * @param[IN] int column - Column position to set the element at
     * @param[OUT] bool - True if empty, false otherwise
     */
    bool isPositionEmpty(int row, int column);

    /*!
     * @brief Destructor CBoard class
     */
    ~CBoard();

};

#endif