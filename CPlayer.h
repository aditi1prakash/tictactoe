/*!
 * @file CPlayer.h
 * @details Header file for players in the game
 * @author Aditi Prakash 
 * @date 08-05-2023
 */

#ifndef CPLAYER_H_
#define CPLAYER_H_

#include <iostream>

class CPlayer
{
private:
    unsigned char m_playerChar;     /*! @brief Character that represents the player during the game */
    uint8_t m_moves;                /*! @brief Number of moves the player has */
    uint8_t m_score;                /*! @brief Player's score */

public:

    /*!
     * @brief Constructor CPlayer class
     */
    CPlayer();

    /*!
     * @brief Const getter method for player character
     * @details The character that represents the player during the game
     * @param[IN] None
     * @param[OUT] unsigned char - player character 
     */
    unsigned char getPlayerChar() const;

    /*!
     * @brief Setter method for player character
     * @details The character that represents the player during the game
     * @param[IN] unisgned char - player character
     * @param[OUT] None 
     */
    void setPlayerChar(unsigned char playerChar);

    /*!
     * @brief Destructor CPlayer class
     */
    ~CPlayer();

};

#endif