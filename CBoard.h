/*!
 * @file CBoard.h
 * @details 
 * @author Aditi Prakash
 * @date 
 */

#ifndef CBOARD_H_
#define CBOARD_H_

#include <iostream>

class CBoard 
{
private:
    uint8_t m_rows;     /*! @brief Number of rows on the board*/
    uint8_t m_columns;  /*! @brief Number of columns on the board*/
    char boardChar;     /*! @brief Character element to denote the board positions*/

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
    uint8_t getRows() const;

    /*!
     * @brief Getter method for columns - const
     * @details 
     * @param[IN] 
     * @param[OUT] uint8_t - number of columns on the board
     */
    uint8_t getColumns() const;
    
    /*!
     * @brief Setter method for rows
     * @details 
     * @param[IN] uint8_t - number of rows required for the board game
     * @param[OUT] 
     */
    void setRows(uint8_t rows);
    
    /*!
     * @brief Setter method for columns
     * @details 
     * @param[IN] 
     * @param[OUT] uint8_t - number of columns required for the board game
     */
    void setColumns(uint8_t columns);

    /*!
     * @brief Destructor CBoard class
     */
    ~CBoard();

};

#endif