// But : Écrire un programme qui demande un nombre positif cinq chiffre a l'utilisateur ni plus ni moins, vérifie qu'il a cinq chiffre puis les affiches verticalement en ordre
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

using namespace std; // Inclus le std pour ne pas le remettre à chq fois dans notre code

int main()
{
	int cinq; // Initialiser une variable ou stocker le nombre à cinq chiffre de l'utilisateur
	int nb1; // Variable pour stocker le premier chiffre du nombre
	int nb2; // Variable pour stocker le deuxième chiffre du nombre
	int nb3; // Variable pour stocker le troisième chiffre du nombre
	int nb4; // Variable pour stocker le quatrième chiffre du nombre
	int nb5; // Variable pour stocker le cinquième chiffre du nombre


	setlocale(LC_ALL, ""); // Ajouter la biblio

	cout << "Ce programme vous demande d'entrer un nombre à cinq chiffres puis les affiches verticalement! \n \n"; // Afficher à l'écran l'utilité du programme

	cout << "\t \t \t---------------------------Exercice #2-------------------------------- \n"; // Afficher le numéro de l'exercice

	cout << "Veuillez entrer un nombre à cinq chiffres: "; // Demander à l'utilisateur de rentrer un nombre à cinq chiffre

	cin >> cinq; // Stocker le nombre dans la variable créée plus haut

	cout << endl; // Retour à la ligne

	if (cinq <= -10000 && cinq >= -99999 && cinq >= 10000 && cinq <= 99999) // Rentrer dans le if si la variable cinq est plus grande que 10000 et en même temps plus petite que 99999
	{
		nb1 =  cinq / 10000; // Calcul pour récupérer juste le premier chiffre à l'aide de la division par 10 000 puisque le nombre contient 5 chiffres
		nb2 = (cinq % 10000) / 1000; // Calcul pour récupérer le deuxieme chiffre, on utilise modulo 10 000 qui vient prendre que les quatre premier chiffres et ensuite on divise par 1000 pour récupéré juste le 2eme chiffre du nombre complet.
		nb3 = (cinq % 1000) / 100; // Ainsi de suite
		nb4 = (cinq % 100) / 10;
		nb5 = cinq % 10;

		cout << nb1 << endl; // Afficher les résultats des calculs juste au-dessus
		cout << nb2 << endl;
		cout << nb3 << endl;
		cout << nb4 << endl;
		cout << nb5 << endl;

		cout << endl;


		cout << "\t \t---------------------------Voici le résultat! Bonne journée ;)-------------------------------- \n";
	}
	else
	{
		cout << "Erreur! Ce nombre ne contient pas cinq chiffres ou il est négatif!"; // Affiche un message d'erreurs car le nombre ne contient pas 5 chiffres

		cout << endl;
	}

	return 0;
}

/*
1. Veuillez rentrer le nombre 12345 --> Le programme doit afficher les 5 chiffres du nombre rentrer en ordre verticalement!

2. Veuillez rentrer le nombre 1234 --> Le programme doit afficher un message d'erreur qui mentionne que votre nombre ne contient pas 5 chiffres ou il est négatif!

3. Veuillez rentrer le nombre 123456 --> Le programme doit afficher un message d'erreur qui mentionne que votre nombre ne contient pas 5 chiffres ou il est négatif!

4. Veuillez rentrer le nombre -12345 --> Le programme doit afficher un message d'erreur qui mentionne que votre nombre ne contient pas 5 chiffres ou il est négatif!

5. Veuillez rentrer le nombre 123456 --> Le programme doit afficher un message d'erreur qui mentionne que votre nombre ne contient pas 5 chiffres ou il est négatif!
*/