// But : �crire un prog qui demande � l'utilisateur deux entiers et qui dit lequel est le plus grand ou si les nombres sont pareils
// Auteur :	Issam Abdelkrim
// Date : 2021-09-03

#include <iostream>
using namespace std;

int main()
{
   int nb1;
   int nb2;

   setlocale(LC_ALL, "");

   cout << "Ce programme compare deux nombres d�terminer par l'utilisateur. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

   cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

   cout << "Rentrer un premier entier: ";

   cin >> nb1;

   cout << "Rentrer un deuxi�me entier: ";

   cin >> nb2;

   cout << endl;

   while (nb1 != 9999)
   {

      while (nb1 == nb2 && nb1 != 9999)
      {

         cout << "Les deux nombres sont �gales!" << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare deux nombres d�terminer par l'utilisateur! \n \n";

         cout << "Pour quitter en tout moment rentrer (9999)" << endl;

         cout << "\t \t \t-------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << endl;
      }

      while (nb1 < nb2 && nb1 != 9999)
      {

         cout << nb1 << " est plus petit que " << nb2 << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare deux nombres d�terminer par l'utilisateur! \n \n";

         cout << "Pour quitter en tout moment rentrer (9999)" << endl;

         cout << "\t \t \t-------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << endl;

      }

      while (nb1 > nb2 && nb1 != 9999)
      {

         cout << nb1 << " est plus grand que " << nb2 << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare deux nombres d�terminer par l'utilisateur! \n \n";

         cout << "Pour quitter en tout moment rentrer (9999)" << endl;

         cout << "\t \t \t-------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxi�me entier: ";

         cin >> nb2;

         cout << endl;
      }



   }

      system("pause");
      return 0;

}

/*    Plans de tests
                                 
1.    nb1      nb2      r�ponse � l'�cran

2.    1        1        Message que les deux nombres sont �gales

3.   -1      -1       Message que les deux nombres sont �gales

4.    2        0        Message que nb1 est plus grand que nb2

5.    0        2        Message que nb1 est plus petit que nb2

6.   -2      -7       Message que nb1 est plus grand que nb2

7.   -7      -2       Message que nb1 est plus petit que nb2
*/