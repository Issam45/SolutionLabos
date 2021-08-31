// But : Écrire un programme qui demande deux nombres entier pour chque opération arithmétique(+, -, *, /, modulo %) à l'utilisateur,
// en fait le calcul  et l'affiche à l'écran.
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

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
	int resultat;
	int resteDivisionEntiere;
	//char lettre;
	setlocale(LC_ALL, "");

	cout << "Rentrer votre premier nombre entier: ";
	// On va lire l'info tapée sur le clavier (périphérique d'entrée : input : canal d'entrée : cin)
	cin >> entier1;
	
	while (entier1 != 0)
	{
		cout << "Rentrer votre deuxième nombre entier: ";

		cin >> entier2;


		resultat = entier1 + entier2;

		cout << endl; // endl permet de passer à la ligne : end line --> il y a une autre manière pour passer à la ligne plus courte --> \n entre guillemet "\n"

		cout << "La somme des deux nombres entier est de \t" << resultat << endl; // \t permet de faire une tabulation un plus gros espace


		cout << "\n"; // "\n" pour sauter à la ligne

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tapée sur le clavier (périphérique d'entrée : input : canal d'entrée : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxième nombre entier: ";

		cin >> entier2;


		resultat = entier1 - entier2;

		cout << endl;

		cout << "La différence des deux nombres entier est de " << resultat << endl;


		cout << endl;

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tapée sur le clavier (périphérique d'entrée : input : canal d'entrée : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxième nombre entier: ";

		cin >> entier2;

		cout << endl;

		if (entier2 != 0)
		{
			resultat = entier1 / entier2;			
			
			cout << "La quotient des deux nombres entier est de " << resultat << endl;
		
		}
		//Attention on ne peut pas diviser par zéro 0, donc on doit tester que entier 2 n'est pas égale à zéro

		else
		{
			cout << "Un nombre entier ne peut pas être diviser par zéro" << endl;
		}

		cout << endl;

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tapée sur le clavier (périphérique d'entrée : input : canal d'entrée : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxième nombre entier: ";

		cin >> entier2;


		resultat = entier1 * entier2;

		cout << endl;

		cout << "La produit des deux nombres entier est de " << resultat << endl;

		cout << endl;

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tapée sur le clavier (périphérique d'entrée : input : canal d'entrée : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxième nombre entier: ";

		cin >> entier2;

		cout << endl;

		if (entier2 != 0)
		{
			resultat = entier1 / entier2;
			resteDivisionEntiere = entier1 % entier2;

			cout << endl;

			cout << "Le modulo des deux nombres entier est de " << resteDivisionEntiere << " reste " << resultat << endl;
		}
		//Attention on ne peut pas diviser par zéro 0, donc on doit tester que entier 2 n'est pas égale à zéro
		

		else
		{
			cout << "Un nombre entier ne peut pas être diviser par zéro" << endl;
		}


		

		return 0;
	}
}