// But : Écrire un programme qui demande un nombre cinq chiffre a l'utilisateur ni plus ni moins, vérifie qu'il a cinq chiffre puis les affiches verticalement en ordre
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

using namespace std; // Inclus le std pour ne pas le remettre à chq fois dans notre code

int main()
{
	int cinq;
	int nb1=0;
	int nb2;
	int nb3;
	int nb4;
	int nb5;


	setlocale(LC_ALL, "");

	cout << "Ce programme vous demande d'entrer un nombre à cinq chiffres puis les affiches verticalement! \n \n";

	cout << "\t \t \t---------------------------Exercice #2-------------------------------- \n";

	cout << "Veuillez entrer un nombre à cinq chiffres: ";

	cin >> cinq;

	cout << endl;

	if (cinq >= 10000 && cinq <= 99999)
	{
		nb1 = (cinq % 100000)/10000;
		nb2 = (cinq % 10000)/1000;
		nb3 = (cinq % 1000)/100;
		nb4 = (cinq % 100)/10;
		nb5 = cinq % 10;

		cout << nb1 << endl;
		cout << nb2 << endl;
		cout << nb3 << endl;
		cout << nb4 << endl;
		cout << nb5 << endl;	
		
		cout << endl;


	cout << "\t \t---------------------------Voici le résultat! Bonne journée ;)-------------------------------- \n";
	}
	else
	{
		cout << "Erreur! Ce nombre ne contient pas cinq chiffres!";

		cout << endl;
	}

	return 0;
}