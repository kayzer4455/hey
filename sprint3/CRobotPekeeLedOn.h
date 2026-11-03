/*!
* Name of the project: Control a robot Pekee
* @file CRobotPekeeLedOn.h
* @brief interface of the class CRobotPekeeLedOn
* @version : 1.0
* @author Baptiste CASSAN
* @date creation 03/11/2026
*
*/
#pragma once
#include <string>
using namespace std;
#include "CRobotPekee.h"


class CRobotPekeeLedOn : public CRobotPekee
{

public:

/*!
* @fn CRobotPekeeLedOn
* @brief Constructor of the CRobotPekeeLedOn class. It calls the constructor
* of CRobotPekee to connect the robot.
* @param[in] un_nom : name of the robot
* @param[in] une_adrIP : address for connecting to the real or simulated robot
*
*/
CRobotPekeeLedOn(string un_nom, string une_adrIP);

/*!
* @fn ~CRobotPekeeLedOn
* @brief Destructor of the CRobotPekeeLedOn class.
*
*/
~CRobotPekeeLedOn(void);

/*!
* @fn avancer
* @brief Moves the robot forward over a distance with the led on.
* The led is switched off at the end of the move.
* @param[in] distance : distance to travel
* @param[in] vitesseT : translation speed
*
*/
void avancer(float distance, int vitesseT = 100);

/*!
* @fn reculer
* @brief Moves the robot backward over a distance with the led on.
* The led is switched off at the end of the move.
* @param[in] distance : distance to travel
* @param[in] vitesseT : translation speed
*
*/
void reculer(float distance, int vitesseT = 100);

};
