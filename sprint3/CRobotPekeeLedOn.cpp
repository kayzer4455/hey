/*!
* Name of the project: Control a robot Pekee
* @file CRobotPekeeLedOn.cpp
* @brief code of the class CRobotPekeeLedOn
* @version : 1.0
* @author Baptiste CASSAN
* @date creation 03/11/2026
*
*/
#include <iostream>
using namespace std;

#include "..\includes\CRobotPekeeLedOn.h"

/*!
* @fn CRobotPekeeLedOn
* @brief Constructor of the CRobotPekeeLedOn class. It calls the constructor
* of CRobotPekee to connect the robot.
* @param[in] un_nom : name of the robot
* @param[in] une_adrIP : address for connecting to the real or simulated robot
*
*/
CRobotPekeeLedOn::CRobotPekeeLedOn(string un_nom, string une_adrIP) : CRobotPekee(un_nom, une_adrIP)
{
}

/*!
* @fn ~CRobotPekeeLedOn
* @brief Destructor of the CRobotPekeeLedOn class.
*
*/
CRobotPekeeLedOn::~CRobotPekeeLedOn(void)
{
}

/*!
* @fn avancer
* @brief Moves the robot forward over a distance with the led on.
* The led is switched off at the end of the move.
* @param[in] distance : distance to travel
* @param[in] vitesseT : translation speed
*
*/
void CRobotPekeeLedOn::avancer(float distance, int vitesseT)
{
	// on allume la led
	this->LedOn();

	// on avance avec la methode de la classe mere
	CRobotPekee::avancer(distance, vitesseT);
	this->SetSpeed(0, 0);

	// on eteint la led a la fin du deplacement
	this->LedOff();
}

/*!
* @fn reculer
* @brief Moves the robot backward over a distance with the led on.
* The led is switched off at the end of the move.
* @param[in] distance : distance to travel
* @param[in] vitesseT : translation speed
*
*/
void CRobotPekeeLedOn::reculer(float distance, int vitesseT)
{
	// on allume la led
	this->LedOn();

	// on recule avec la methode de la classe mere
	CRobotPekee::reculer(distance, vitesseT);
	this->SetSpeed(0, 0);

	// on eteint la led a la fin du deplacement
	this->LedOff();
}
