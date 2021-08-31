// But : Écrire un programme qui demande deux nombres entier à l'utilisateur,
// calcul la somme de ses deux nombres et l'affiche à l'écran.
// Auteur :	Issam Abdelkrim
// Date : 2021-08-30

#include <iostream>

using namespace std;

int main()
{	
	// Ici on va réserver de la place en mémoire pour mémoriser les valeurs fournies par l'utilisateur.
	// Il faut déclarer des variables. Une variable est un emplacement mémoire dont le contentu peut varier : être changer.
	// Pour déclarer une variable il faut deux infos:
	// 1. Le type de la variable (du texte (string : 15 octets), un nombre (integer : int : 4 octets), nombre à virgule(float : 4 octets, double : 10 octets), un seul caractère (char : 1 octet), booléen (bool : 1 octet) "Peut seulement donner deux réponse --> "vrai ou faux")
	// 2. Donner un nom à la variable : ne doit pas commencer par un chiffre, pas d'espace dans le nom, --> contraite du prof commence par une minuscule et les autres mots qui suivent commencent par une majiscule

	//Déclaration des variables
	int entier1;
	int entier2;
	int somme;
	//char lettre;
	setlocale(LC_ALL, "");


	while (1)
	{
		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tapée sur le clavier (périphérique d'entrée : input : canal d'entrée : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxième nombre entier: ";

		cin >> entier2;

		/*if (entier1 & entier2 != )
		{

			/*cout << "Rentrer votre deuxième nombre entier: ";

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

