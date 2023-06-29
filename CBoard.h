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
    uint8_t m_rows;         /*! @brief Number of rows on the board*/
    uint8_t m_columns;      /*! @brief Number of columns on the board*/
    CPosition m_position;   /*! @brief Represents a particular position on the board*/
    std::vector<std::vector<char>> m_board;   /*! @brief Array to represent board with size m_rows*m_columns */ //TODO: Improve array handling

//Create an array for with row and column parameters from within the constructor, 
//manipulate this array to maintain the player moves and stones

public:

    /*!
     * @brief Constructor CBoard class
     */
    CBoard(uint8_t rows, uint8_t columns);

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
     * @param[OUT] uint8_t - number of rows on the board
     */
    uint8_t getRows() const {return m_rows;}

    /*!
     * @brief Getter method for columns - const
     * @details 
     * @param[IN] 
     * @param[OUT] uint8_t - number of columns on the board
     */
    uint8_t getColumns() const {return m_columns;}
    
    /*!
     * @brief Setter method for rows
     * @details 
     * @param[IN] uint8_t - number of rows required for the board game
     * @param[OUT] 
     */
    void setRows(uint8_t rows){this->m_rows = rows;}
    
    /*!
     * @brief Setter method for columns
     * @details 
     * @param[IN] 
     * @param[OUT] uint8_t - number of columns required for the board game
     */
    void setColumns(uint8_t columns){this->m_columns = columns;}

    /*!
     * @brief Method to set the element at a particular position on the board
     * @details 
     * @param[IN] uint8_t row - Row position to set the element at
     * @param[IN] uint8_t column - Column position to set the element at
     * @param[IN] char element - Element to be set at the position
     * @param[OUT] None
     */
    void setElementAt(uint8_t row, uint8_t column, char element);

    /*!
     * @brief Method to get the element at a particular position on the board
     * @details 
     * @param[IN] uint8_t row - Row position to set the element at
     * @param[IN] uint8_t column - Column position to set the element at
     * @param[OUT] char - Stone character at the position
     */
    char getElementAt(uint8_t row, uint8_t column);

    /*!
     * @brief Setter method for columns
     * @details 
     * @param[IN] uint8_t row - Row position to set the element at
     * @param[IN] uint8_t column - Column position to set the element at
     * @param[OUT] bool - True if empty, false otherwise
     */
    bool isPositionEmpty(uint8_t row, uint8_t column);

    /*!
     * @brief Destructor CBoard class
     */
    ~CBoard();

};

#endif