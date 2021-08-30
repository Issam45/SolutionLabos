// But : �crire un programme qui affiche un message a l'�cran
// Auteur :	Issam Abdelkrim
// Date : 20201-08-26

// Il faut ouvrir une porte a notre programme.
//Le prog recherche tjrs la foncion principal pour commencer
// Fonction principal sappele tjrs (main)
// N'importe quel fonction est suivie de parenthese qui contiendront la liste des parametres qui ppeut rester vide
// N'importe quel fonction peut ou pas retourner un r�sultat. Si ele ne retourne rien alors on indique void avant son nom

// Avant de partir, il faut prendre ses outils pour afficher un message a l'�cran (ajouter les librairies)
#include <iostream> // On doit inclure une bibliotheque qui contient plusieurs fonctions pour saisir de l'information au clavier(i : in : input : entr�e)
					//ou afficher des messages a l'�cran (o : out : output : sortie)
					// Sur ces peripheriques les donn�es circulent => flux : stream

using namespace std; // Nous �vite de mettre std :: avant chq cout plus bas
void main() // Void est un type qui permet de dire a la fonction si elle donne un r�sultat ou non
// Toutes instruction doit etre mise entre accolades qui d�limitent un bloc d'instructions
// L'accolade ouvrante doit tjrs etre au dessus de l'accolade fermante
{			//Ouvre le bloc d'instruction

	//Pour que les messages s'affiche avec les bon caracteres accentuer il faut ajouter cette bibilio
	setlocale(LC_ALL, "");
	
	// Ici on peut commencer le prog

	cout << "				Hello world !";

	// Les messages doivent etre �crits entre guillemets
	// Les becs de canards << indiquent la direction vers ou les donn�es sont envoy�es
	// Chaque instruction en C++ doit se terminer par un point virgule


	// Avant de terminer le prog on va faire une pause pour permettre a l'utilisateur de lire le message
	system("pause");


}			// Ferme le bloc d'instrucctions

