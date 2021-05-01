#include <iostream>
#include <math.h>

int menuPrinc();
void messageErreur();
void auRevoir();
double definirCotee();
void octahedre(double cotee);
void dodecahedre(double cotee);

int main() {
	bool quitter = false;

	do
	{
		int choix;
		double taille_cotee = -1;
		
		taille_cotee = definirCotee();
		if (taille_cotee != 0)
		{
			choix = menuPrinc();
		}
		else
		{
			choix = 0;
		}

		switch (choix)
		{
		case 1:
			//Dodecahedre
			dodecahedre(taille_cotee);
			break;
		case 2:
			//Octahedre
			octahedre(taille_cotee);
			break;
		case 0:
			quitter = true;
			break;
		default:
			messageErreur();
			break;
		}
		std::cout << choix << std::endl;
	} while (!quitter);

	auRevoir();
	return 0;
}
//==================================LOGISTIQUE================================================================
int menuPrinc() {
	bool sortir = false;
	int choix;
	do
	{
		std::cout << "=============================================================================================\n"
			<< "|                           MENU PRINCIPAL                                                  |\n"
			<< "|                                                                                           |\n"
			<< "|    Dodecahedre                                                    FAITES LE 1             |\n"
			<< "|    Octahedre                                                      FAITES LE 2             |\n"
			<< "|    POUR QUITTER                                                   FAITES LE 0             |\n"
			<< "|                                                                                           |\n"
			<< "============================================================================================="
			<< std::endl;

		std::cin >> choix;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
		}

		if (choix == 1 || choix == 2 || choix == 0)
		{
			sortir = true;
		}
		else
		{
			messageErreur();
		}
	} while (!sortir);

	return choix;
}
void messageErreur() {
	std::cout << "\n\n\n\n\n=============================================================================================\n"
		<< "|                                                                                           |\n"
		<< "|!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|\n"
		<< "|                               ERREUR                                                      |\n"
		<< "|                           ENTRÉE INVALIDE                                                 |\n"
		<< "|!@#$%?&*())(*&?%$#@!@#$%?&*())(*&?%$#@!@#$%?&*()(*&?%$#@@#$%?&*()(*&?%$#@!@#$%?&*(*&?%$#@!(|\n"
		<< "|                                                                                           |\n"
		<< "============================================================================================="
		<< std::endl;
	std::cout << "\n\n		Faites entree pour continuer" << std::endl;
	std::cin.get();
	std::cin.ignore();
}
double definirCotee() {
	bool sortir = false;
	double valeur;
	do
	{
		std::cout << "Bienvenue à vous, \n         Veuillez entrer la taille d'un cotee :" << std::endl;
		std::cout << "\n\n~~ Vous pouvez faire le 0 pour quitter le logiciel~~ " << std::endl;
		std::cin >> valeur;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			messageErreur();
		}
		else
		{
			sortir = true;
		}
	} while (!sortir);
	return valeur;
}
void auRevoir() {
	std::cout << " \n\n\n\n\n _.........._ \n"
		<< "| |Merci de| |\n"
		<< "| |m'avoir | |\n"
		<< "| |utilisé | |\n"
		<< "| |________| |\n"
		<< "|   ______   |\n"
		<< "|  |    | |  |\n"
		<< "|__|____|_|__|@Par : Francis Boudreault // Ciao~~ Ciao~~"
		<< std::endl;
}
//================================CALCULS======================================================================
void dodecahedre(double cotee) {
	std::cout << "Le volume du Dodecahedre est de = " << (7.66 * pow(cotee, 3)) << std::endl;
	std::cout << "\n		Faites entree pour continuer" << std::endl;
	std::cin.get();
	std::cin.ignore();
}
void octahedre(double cotee) {
	std::cout << "Le volume de l'Octahedre est de = " << (.471 * pow(cotee, 3)) << std::endl;
	std::cout << "\n		Faites entree pour continuer" << std::endl;
	std::cin.get();
	std::cin.ignore();
}