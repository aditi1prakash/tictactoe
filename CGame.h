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
#include "CPlayer.h"

static const int NUMBER_OF_PLAYERS {2};

class CGame 
{
private:
    CBoard* m_board;
    CPlayer* m_player[NUMBER_OF_PLAYERS];

    bool _winnerAvailable();
    char _checkWinner();

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
     * @brief Method to invoke to begin the game
     * @details 
     * @param[IN] 
     * @param[OUT] 
     */
    void checkWinner();


    /*!
     * @brief Destructor CGame class
     */
    ~CGame();

};

#endif