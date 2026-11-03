/*!
* Name of the project: Control a robot Pekee
* @file TU_CRobotPekeeD.cpp
* @brief unit tests of the class CRobotPekeeD
* @version : 1.0
* @author Baptiste CASSAN
* @date creation 03/11/2026
*
*/
#include <iostream>
using namespace std;

#include "..\includes\CRobotPekeeD.h"

/*!
* @fn main
* @brief connects the robot CRobotPekeeD and tests its methods
* @return 0
*
*/
int main(void)
{
	int vitesse;    // vitesse de croisiere
	float distance; // distance a parcourir
	int rep;        // choix dans le menu

	// Creation du robot et connexion au robot simule
	CRobotPekeeD robot("Pekee", "localhost", 0.3, 0.2);

	if (robot.estConnecte())
	{
		cout << "connexion avec le robot ok \n";

		do
		{
			cout << "Commande du robot" << endl;
			cout << "**************************" << endl << endl;

			cout << "Que doit faire le robot ?" << endl;
			cout << "1 - Avancer sur une distance" << endl;
			cout << "2 - Reculer sur une distance" << endl;
			cout << "0 - Fin commande du robot" << endl;

			cin >> rep;

			switch (rep)
			{
			case 1: // AVANCER sur une distance
				cout << "Quelle distance ? ";
				cin >> distance;
				cout << "Quelle vitesse ? ";
				cin >> vitesse;
				robot.avancer(distance, vitesse);
				break;

			case 2: // RECULER sur une distance
				cout << "Quelle distance ? ";
				cin >> distance;
				cout << "Quelle vitesse ? ";
				cin >> vitesse;
				robot.reculer(distance, vitesse);
				break;

			case 0:
				cout << "Fin commande du robot" << endl;
				break;

			default:
				cout << "Erreur de saisie" << endl;
				break;
			}
		} while (rep != 0);
	}
	else
	{
		cout << "probleme de connexion avec le robot \n";
	}

	return 0;
}
