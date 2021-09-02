// But : Écrire un programme qui demande un entier à l'utilisateur et affiche s'il s'agit d'un entier pair ou impair
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

using namespace std; // Inclus le std pour ne pas le remettre à chq fois dans notre code

int main()
	{
		int entier1;

		setlocale(LC_ALL, "");

		cout << "Ce programme détermine si votre nombre entier est pair ou impair! \n \n";

		cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n";

		cout << "Veuillez entrer un nombre entier: ";

		cin >> entier1;

		while (entier1 % 2 == 0)
		{
			cout << "Votre nombre est pair! ";
			cout << "Veuillez entrer un nombre entier: ";

			cin >> entier1;
		}
		cout << endl;

		while (entier1 % 2 != 0)
		{
			cout << "Votre nombre est impair! ";
			cout << "Veuillez entrer un nombre entier: ";

			cin >> entier1;
		}

		/*while (entier1 != 0)
		{

			if (entier1 % 2 == 0)
			{
				cout << "Votre nombre " << "(" << entier1 << ")" " est pair!" << endl;

				cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n";

				cout << "Veuillez entrer un nombre entier: ";

				cin >> entier1;

			}
				
			else
			{
				cout << "Votre nombre " << "(" << entier1 << ")" " est impair!" << endl;
			}

			
		}*/

		system("pause");
		return 0;
	
	}
/*
// But : Écrire un programme qui demande un entier à l'utilisateur et affiche s'il s'agit d'un entier pair ou impair
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

using namespace std; // Inclus le std pour ne pas le remettre à chq fois dans notre code

int main()
{
	int entier1;

	setlocale(LC_ALL, "");

	cout << "Ce programme détermine si votre nombre entier est pair ou impair! \n \n";

	cout << "Pour quitter en tout moment rentrer (9999)" << endl;

	cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n";

	cout << "Veuillez entrer un nombre entier: " ;

	cin >> entier1;
	cout << endl;

	while( entier1 != 9999) 
	{
			
		while (entier1 % 2 == 0 && entier1 != 9999)
		{
			cout << "Votre nombre est pair! " << endl;

			system("pause");
			system("cls");

			cout << "Ce programme détermine si votre nombre entier est pair ou impair! \n \n";

			cout << "Pour quitter en tout moment rentrer (9999)" << endl;

			cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n";

			cout << "Veuillez entrer un nombre entier: ";

			cin >> entier1;

			cout << endl;
		}
		cout << endl;

		while (entier1 % 2 != 0 && entier1 != 9999)
		{
			cout << "Votre nombre est impair! " << endl;

			system("pause");
			system("cls");

			cout << "Ce programme détermine si votre nombre entier est pair ou impair! \n \n";

			cout << "Pour quitter en tout moment rentrer (9999)" << endl;

			cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n";

			cout << "Veuillez entrer un nombre entier: ";

			cin >> entier1;

			cout << endl;
		}
		
	}
	system("pause");
	return 0;

}

/*
1. Veuillez rentrer le chiffre 2 --> Le programme doit afficher un message qui mentionne que votre entier est pair!

2. Veuillez rentrer le chiffre 3 --> Le programme doit afficher un message qui mentionne que votre entier est impair!
*/
