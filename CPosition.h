/*! 
 * @file    CPosition.h
 * @details Header file for CPosition class
 * @author  Aditi Prakash
 * @date    08-05-2023
 */

#ifndef CPOSITION_H_
#define CPOSITION_H_

#include <iostream>

class CPosition
{

private:
    std::uint8_t m_row;         /*! @brief row position*/
    std::uint8_t m_column;      /*! @brief column position*/

public:
    /*!
     * @brief Parametrized constructor 
     */
    CPosition(std::uint8_t row, std::uint8_t column);

    /*!
     * @brief Const getter method for rows 
     * @return std::uint8_t - m_row 
     */
    std::uint8_t getRow() const;

    
    /*!
     * @brief Const getter method for columns 
     * @return std::uint8_t - m_column
     */
    std::uint8_t getColumn() const;
};

#endif