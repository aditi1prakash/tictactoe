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
    CBoard* m_board;                            /*! \brief Pointer to the board class */
    CPlayer* m_player[NUMBER_OF_PLAYERS];       /*! \brief Player class pointer array */

    /*!
     * @brief Method to configure initial settings
     * @details No of players, board dimensions, etc..
     * @param[IN]       None
     * @param[OUT]      None 
     */
    void _init();

    /*!
     * @brief Check if a winner is available
     * @details No of players, board dimensions, etc..
     * @param[IN]   None
     * @param[OUT] bool - True if there is a winner, false otherwise 
     */
    bool _winnerAvailable();

    /*!
     * @brief Check which player won, if any
     * @details Scans the board (rows, columns, and diagonals) and returns the stone character of the winner 
     * @param[IN]   None
     * @param[OUT]  char - return stone character of the player who wins, default character when there is no winner
     */
    char _checkWinner();

public:

    /*!
     * @brief Constructor CGame class
     */
    CGame();

    /*!
     * @brief Method to invoke to begin the game
     * @details 
     * @param[IN]       None
     * @param[OUT]      None
     */
    void play();

    /*!
     * @brief Destructor CGame class
     */
    ~CGame();

};

#endif