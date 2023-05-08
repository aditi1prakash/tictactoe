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

public:

    /*!
     * @brief Constructor CBoard class
     */
    CBoard();

    /*!
     * @brief 
     * @details 
     * @param[IN] 
     * @param[OUT] 
     */
    uint8_t getRows() const;

    /*!
     * @brief 
     * @details 
     * @param[IN] 
     * @param[OUT] 
     */
    uint8_t getColumns() const;
    
    /*!
     * @brief 
     * @details 
     * @param[IN] 
     * @param[OUT] 
     */
    void setRows(uint8_t rows);
    
    /*!
     * @brief 
     * @details 
     * @param[IN] 
     * @param[OUT] 
     */
    void setColumns(uint8_t columns);

    /*!
     * @brief Destructor CBoard class
     */
    ~CBoard();

};

#endif