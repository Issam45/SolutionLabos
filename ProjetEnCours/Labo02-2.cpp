// But : �crire un programme qui demande deux nombres entier pour chque op�ration arithm�tique(+, -, *, /, modulo %) � l'utilisateur,
// en fait le calcul  et l'affiche � l'�cran.
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

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
	int resultat;
	int resteDivisionEntiere;
	//char lettre;
	setlocale(LC_ALL, "");

	cout << "Rentrer votre premier nombre entier: ";
	// On va lire l'info tap�e sur le clavier (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
	cin >> entier1;
	
	while (entier1 != 0)
	{
		cout << "Rentrer votre deuxi�me nombre entier: ";

		cin >> entier2;


		resultat = entier1 + entier2;

		cout << endl; // endl permet de passer � la ligne : end line --> il y a une autre mani�re pour passer � la ligne plus courte --> \n entre guillemet "\n"

		cout << "La somme des deux nombres entier est de \t" << resultat << endl; // \t permet de faire une tabulation un plus gros espace


		cout << "\n"; // "\n" pour sauter � la ligne

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tap�e sur le clavier (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxi�me nombre entier: ";

		cin >> entier2;


		resultat = entier1 - entier2;

		cout << endl;

		cout << "La diff�rence des deux nombres entier est de " << resultat << endl;


		cout << endl;

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tap�e sur le clavier (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxi�me nombre entier: ";

		cin >> entier2;

		cout << endl;

		if (entier2 != 0)
		{
			resultat = entier1 / entier2;			
			
			cout << "La quotient des deux nombres entier est de " << resultat << endl;
		
		}
		//Attention on ne peut pas diviser par z�ro 0, donc on doit tester que entier 2 n'est pas �gale � z�ro

		else
		{
			cout << "Un nombre entier ne peut pas �tre diviser par z�ro" << endl;
		}

		cout << endl;

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tap�e sur le clavier (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxi�me nombre entier: ";

		cin >> entier2;


		resultat = entier1 * entier2;

		cout << endl;

		cout << "La produit des deux nombres entier est de " << resultat << endl;

		cout << endl;

		cout << "Rentrer votre premier nombre entier: ";
		// On va lire l'info tap�e sur le clavier (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
		cin >> entier1;

		cout << "Rentrer votre deuxi�me nombre entier: ";

		cin >> entier2;

		cout << endl;

		if (entier2 != 0)
		{
			resultat = entier1 / entier2;
			resteDivisionEntiere = entier1 % entier2;

			cout << endl;

			cout << "Le modulo des deux nombres entier est de " << resteDivisionEntiere << " reste " << resultat << endl;
		}
		//Attention on ne peut pas diviser par z�ro 0, donc on doit tester que entier 2 n'est pas �gale � z�ro
		

		else
		{
			cout << "Un nombre entier ne peut pas �tre diviser par z�ro" << endl;
		}


		

		return 0;
	}
}