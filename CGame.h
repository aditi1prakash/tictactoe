/*!
 * @file <CGame>.h
 * @details Header file for Game class
 * @author Aditi Prakash
 * @date 10-05-2023
 */

#ifndef CGAME_H_
#define CGAME_H_

#include <iostream>

#include "CBoard.h"

class CGame 
{
private:
    CBoard *board;

public:

    /*!
     * @brief Constructor CGame class
     */
    CGame();

    /*!
     * @brief Method to set initial settings
     * @details No of players, board dimensions, etc..
     * @param[IN] 
     * @param[OUT] 
     */
    void initialize();

    /*!
     * @brief Method to invoke to begin the game
     * @details 
     * @param[IN] 
     * @param[OUT] 
     */
    void play();

    /*!
     * @brief Destructor CGame class
     */
    ~CGame();

};

#endif