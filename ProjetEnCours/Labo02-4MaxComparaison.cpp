// But : �crire un prog qui demande � l'utilisateur trois entiers et qui dit lequel est le plus grand.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-03

#include <iostream>
using namespace std;

int main()
{
   int nb1;
   int nb2;
   int nb3;

   setlocale(LC_ALL, "");

   cout << "Ce programme compare trois nombres d�terminer par l'utilisateur et affiche le plus grand. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

   cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

   cout << "Rentrer un premier entier: ";

   cin >> nb1;

   cout << "Rentrer un deuxi�me entier: ";

   cin >> nb2;

   cout << "Rentrer un troisi�me entier: ";

   cin >> nb3;

   cout << endl;

   while (nb1 != 9999)
   {

      while (nb1 > nb2 && nb1 > nb3 && nb1 != 9999)
      {
         cout << nb1 << " est le plus grand des trois nombres!";

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare trois nombres d�terminer par l'utilisateur et affiche le plus grand. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << "Rentrer un troisi�me entier: ";

         cin >> nb3;

         cout << endl;

      }

      while (nb2 > nb1 && nb2 > nb3 && nb1 != 9999)
      {
         cout << nb2 << " est le plus grand des trois nombres!";

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare trois nombres d�terminer par l'utilisateur et affiche le plus grand. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << "Rentrer un troisi�me entier: ";

         cin >> nb3;

         cout << endl;

      }

      while (nb3 > nb1 && nb3 > nb2 && nb1 != 9999)
      {
         cout << nb3 << " est le plus grand des trois nombres!";

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare trois nombres d�terminer par l'utilisateur et affiche le plus grand. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << "Rentrer un troisi�me entier: ";

         cin >> nb3;

         cout << endl;

      }
      while (nb1 == nb2 && nb2== nb3)
      {

         cout << "Les trois nombres sont �gales" << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare trois nombres d�terminer par l'utilisateur et affiche le plus grand. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << "Rentrer un troisi�me entier: ";

         cin >> nb3;

         cout << endl;
      }

   }

      system("pause");
      return 0;

}

/*    Plans de tests
                                 
1.    nb1      nb2         nb3      r�ponse � l'�cran

2.   1         2        3           nb3 est le plus grand.

3.   3         1        2           nb1 est le plus grand.

4.   2         3        1           nb2 est le plus grand.  

5.   -1        -2       -3          nb1 est le plus grand.

6.  -3         -1       -2          nb2 est le plus grand.

7.   -2        -3       -1          nb3 est le plus grand.

8.   1         1        1           Les trois nombres sont �gales

9.   -1        -1       -1          Les trois nombres sont �gales

10. V�rifier qu'il n'y a pas de boucle infini

11. Rentrer 9999 comme premi�re valeur et rentrer n,importe quel autre valeur pour les deux autres nombres afin de quitter!

12. Rentrer une lettre et le prog ne fonctionne plus.
*/