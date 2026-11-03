/*!
* Name of the project: Control a robot Pekee
* @file CRobotPekeeD.h
* @brief interface of the class CRobotPekeeD
* @version : 1.0
* @author Baptiste CASSAN
* @date creation 03/11/2026
*
*/
#pragma once
#include <string>
using namespace std;
#include "CRobotPekee.h"


class CRobotPekeeD : public CRobotPekee
{

public:

/*!
* @fn CRobotPekeeD
* @brief Constructor of the CRobotPekeeD class. It calls the constructor
* of CRobotPekee to connect the robot and saves the coefficients.
* @param[in] un_nom : name of the robot
* @param[in] une_adrIP : address for connecting to the real or simulated robot
* @param[in] un_coefVitesse : coefficient to compute the low speed VP
* @param[in] un_coefDistance : coefficient to compute the distance DP
*
*/
CRobotPekeeD(string un_nom, string une_adrIP, float un_coefVitesse, float un_coefDistance);

/*!
* @fn ~CRobotPekeeD
* @brief Destructor of the CRobotPekeeD class.
*
*/
~CRobotPekeeD(void);

/*!
* @fn avancer
* @brief Moves the robot forward over a distance in 3 phases :
* start at low speed, move at cruising speed, stop at low speed.
* @param[in] distance : total distance to travel
* @param[in] vitesseT : cruising speed
*
*/
void avancer(float distance, int vitesseT = 100);

/*!
* @fn reculer
* @brief Moves the robot backward over a distance in 3 phases :
* start at low speed, move at cruising speed, stop at low speed.
* @param[in] distance : total distance to travel
* @param[in] vitesseT : cruising speed
*
*/
void reculer(float distance, int vitesseT = 100);


private :

float coefVitesse;  //!< coefficient to compute the low speed VP
float coefDistance; //!< coefficient to compute the distance DP

};
