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
    int m_row;         /*! @brief row position*/
    int m_column;      /*! @brief column position*/

public:
    /*!
     * @brief Default constructor 
     */
    CPosition();
    
    /*!
     * @brief Parametrized constructor 
     */
    CPosition(int row, int column);

    /*!
     * @brief Const getter method for rows 
     * @return int - m_row 
     */
    int getRow() const;
    
    /*!
     * @brief Const getter method for columns 
     * @return int - m_column
     */
    int getColumn() const;

    /*!
     * @brief Destructor CPosition class
     */
    ~CPosition();

};

#endif