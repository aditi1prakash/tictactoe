/*!
 * @file CPlayer.h
 * @details Header file for players in the game
 * @author Aditi Prakash 
 * @date 08-05-2023
 */

#ifndef CPLAYER_H_
#define CPLAYER_H_

#include <iostream>
#include "CBoard.h"

class CPlayer
{
private:
    char m_stoneChar;               /*! @brief Character that represents the player during the game */
    CBoard* m_board;                /*! @brief Pointer to board class */
    /*Further improvements*/
    // uint8_t m_score;                /*! @brief Player's score */  /*TODO: Best of three concept, keep track of each player's score*/
    // std::string m_playerName;       /*! @brief Name of the player*/  

public:

    /*!
     * @brief Constructor CPlayer class
     * @param[IN] CBoard* - pointer to board class object
     */
    CPlayer(CBoard* playerboard);

    /*!
     * @brief Const getter method for player character
     * @details The character that represents the player during the game
     * @param[IN] None
     * @param[OUT] char - player character 
     */
    char getStoneChar() const;

    /*!
     * @brief Setter method for player character
     * @details The character that represents the player during the game
     * @param[IN] char - player character
     * @param[OUT] None 
     */
    void setStoneChar(char playerChar);

    /*!
     * @brief Place stone on the board
     * @details Method used to place the player stone on the required position
     * @param[IN] CPosition - position class object {row, column}
     * @param[OUT] None 
     */
    void placeStone(CPosition pos);

    /*!
     * @brief Destructor CPlayer class
     */
    ~CPlayer();

};

#endif