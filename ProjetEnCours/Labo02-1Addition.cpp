// But : �crire un programme qui demande deux nombres entier � l'utilisateur,
// calcul la somme de ses deux nombres et l'affiche � l'�cran.
// Auteur :	Issam Abdelkrim
// Date : 2021-08-30

#include <iostream>

using namespace std;

int main()
{	
	// Ici on va r�server de la place en m�moire pour m�moriser les valeurs fournies par l'utilisateur.
	// Il faut d�clarer des variables. Une variable est un emplacement m�moire dont le contentu peut varier : �tre changer.
	// Pour d�clarer une variable il faut deux infos:
	// 1. Le type de la variable (du texte (string : 15 octets), un nombre (integer : int : 4 octets), nombre � virgule(float : 4 octets, double : 10 octets), un seul caract�re (char : 1 octet), bool�en (bool : 1 octet) "Peut seulement donner deux r�ponse --> "vrai ou faux")
	// 2. Donner un nom � la variable : ne doit pas commencer par un chiffre, pas d'espace dans le nom, --> contraite du prof commence par une minuscule et les autres mots qui suivent commencent par une majiscule

	//D�claration des variables
	int entier1;
	int entier2;
	int somme;
	//char lettre;
	setlocale(LC_ALL, "");


	while (1)
	{
		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tap�e sur le clavier (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxi�me nombre entier: ";

		cin >> entier2;

		/*if (entier1 & entier2 != )
		{

			/*cout << "Rentrer votre deuxi�me nombre entier: ";

			cin >> entier2;



			somme = entier1 + entier2;

			cout << endl;

			cout << "La somme des deux nombres entier est de " << somme << endl;



		}*/

			somme = entier1 + entier2;

		cout << endl;

		cout << "La somme des deux nombres entier est de " << somme << endl;

		return 0;
	}
}

