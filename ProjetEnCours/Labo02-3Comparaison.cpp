// But : Écrire un prog qui demande à l'utilisateur deux entiers et qui dit lequel est le plus grand ou si les nombres sont pareils
// Auteur :	Issam Abdelkrim
// Date : 2021-09-03

#include <iostream>
using namespace std;

int main()
{
   int nb1;
   int nb2;

   setlocale(LC_ALL, "");

   cout << "Ce programme compare deux nombres déterminer par l'utilisateur. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

   cout << "\t \t -------------------------------Exercie Comparaison------------------------------- \n";

   cout << "Rentrer un premier entier: ";

   cin >> nb1;

   cout << "Rentrer un deuxième entier: ";

   cin >> nb2;

   cout << endl;

   while (nb1 != 9999)
   {

      while (nb1 == nb2 && nb1 != 9999)
      {

         cout << "Les deux nombres sont égales!" << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare deux nombres déterminer par l'utilisateur! \n \n";

         cout << "Pour quitter en tout moment rentrer (9999)" << endl;

         cout << "\t \t \t-------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxième entier: ";

         cin >> nb2;

         cout << endl;
      }

      while (nb1 < nb2 && nb1 != 9999)
      {

         cout << nb1 << " est plus petit que " << nb2 << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare deux nombres déterminer par l'utilisateur! \n \n";

         cout << "Pour quitter en tout moment rentrer (9999)" << endl;

         cout << "\t \t \t-------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxième entier: ";

         cin >> nb2;

         cout << endl;

      }

      while (nb1 > nb2 && nb1 != 9999)
      {

         cout << nb1 << " est plus grand que " << nb2 << endl;

         system("pause");
         system("cls");

         cout << "Ce programme compare deux nombres déterminer par l'utilisateur! \n \n";

         cout << "Pour quitter en tout moment rentrer (9999)" << endl;

         cout << "\t \t \t-------------------------------Exercie Comparaison------------------------------- \n";

         cout << "Rentrer un premier entier: ";

         cin >> nb1;

         cout << "Rentrer un deuxième entier: ";

         cin >> nb2;

         cout << endl;
      }



   }

      system("pause");
      return 0;

}

/*    Plans de tests
                                 
1.    nb1      nb2      réponse à l'écran

2.    1        1        Message que les deux nombres sont égales

3.   -1      -1       Message que les deux nombres sont égales

4.    2        0        Message que nb1 est plus grand que nb2

5.    0        2        Message que nb1 est plus petit que nb2

6.   -2      -7       Message que nb1 est plus grand que nb2

7.   -7      -2       Message que nb1 est plus petit que nb2
*/