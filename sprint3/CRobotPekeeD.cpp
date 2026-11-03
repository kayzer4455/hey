/*!
* Name of the project: Control a robot Pekee
* @file CRobotPekeeD.cpp
* @brief code of the class CRobotPekeeD
* @version : 1.0
* @author Baptiste CASSAN
* @date creation 03/11/2026
*
*/
#include <iostream>
using namespace std;

#include "..\includes\CRobotPekeeD.h"

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
CRobotPekeeD::CRobotPekeeD(string un_nom, string une_adrIP, float un_coefVitesse, float un_coefDistance) : CRobotPekee(un_nom, une_adrIP)
{
	this->coefVitesse = un_coefVitesse;
	this->coefDistance = un_coefDistance;
}

/*!
* @fn ~CRobotPekeeD
* @brief Destructor of the CRobotPekeeD class.
*
*/
CRobotPekeeD::~CRobotPekeeD(void)
{
}

/*!
* @fn avancer
* @brief Moves the robot forward over a distance in 3 phases :
* start at low speed, move at cruising speed, stop at low speed.
* @param[in] distance : total distance to travel
* @param[in] vitesseT : cruising speed
*
*/
void CRobotPekeeD::avancer(float distance, int vitesseT)
{
	float DP; // distance a petite vitesse
	float DG; // distance a vitesse de croisiere
	int VP;   // petite vitesse

	DP = distance * this->coefDistance;
	DG = distance - 2 * DP;
	VP = vitesseT * this->coefVitesse;

	// Demarrer
	CRobotPekee::avancer(DP, VP);
	// Avancer
	CRobotPekee::avancer(DG, vitesseT);
	// Arreter
	CRobotPekee::avancer(DP, VP);

	this->SetSpeed(0, 0);
}

/*!
* @fn reculer
* @brief Moves the robot backward over a distance in 3 phases :
* start at low speed, move at cruising speed, stop at low speed.
* @param[in] distance : total distance to travel
* @param[in] vitesseT : cruising speed
*
*/
void CRobotPekeeD::reculer(float distance, int vitesseT)
{
	float DP; // distance a petite vitesse
	float DG; // distance a vitesse de croisiere
	int VP;   // petite vitesse

	DP = distance * this->coefDistance;
	DG = distance - 2 * DP;
	VP = vitesseT * this->coefVitesse;

	// Demarrer
	CRobotPekee::reculer(DP, VP);
	// Reculer
	CRobotPekee::reculer(DG, vitesseT);
	// Arreter
	CRobotPekee::reculer(DP, VP);

	this->SetSpeed(0, 0);
}
