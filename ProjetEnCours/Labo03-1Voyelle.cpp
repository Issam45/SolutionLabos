// But : Écrire un prog qui demande à l'utilisateur de rentrer une lettre et figuer si c'est une consone ou une voyelle
// Auteur :	Issam Abdelkrim
// Date : 2021-09-03

#include <iostream>
using namespace std;

int main()
{
   char lettre;

   setlocale(LC_ALL, "");

   cout << "Ce programme demande une lettre à l'utilisateur et lui dis si c'est une voyelle ou une consone. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (Q) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

   cout << "\t \t -------------------------------Exercie Voyelle/Consone------------------------------- \n";

   // S'assurer que l'utilisateur a bien rentrer une lettre
   cout << "Rentrer une lettre: ";

   cin >> lettre;

   cout << endl;

   while ((lettre >= 'a' && lettre <= 'z' || lettre >= 'A' && lettre <= 'Z') && lettre != 'Q')
   {

      if ((lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y' || lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y') && lettre != 'Q')
      {
         cout << lettre << " est une voyelle!";

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme demande une lettre à l'utilisateur et lui dis si c'est une voyelle ou une consone. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (Q) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Voyelle/Consone------------------------------- \n";

         // S'assurer que l'utilisateur a bien rentrer une lettre
         cout << "Rentrer une lettre: ";

         cin >> lettre;

         cout << endl;

      }

      else
      {
         cout << lettre << " est une consone!";

         cout << endl;

         system("pause");
         system("cls");

         cout << "Ce programme demande une lettre à l'utilisateur et lui dis si c'est une voyelle ou une consone. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (Q) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Voyelle/Consone------------------------------- \n";

         // S'assurer que l'utilisateur a bien rentrer une lettre
         cout << "Rentrer une lettre: ";

         cin >> lettre;

         cout << endl;
      }

  
   }

      system("pause");
      return 0;

}

/*    Plans de tests
                                 
1.    nb1      nb2         nb3      réponse à l'écran

2.   1         2        3           nb3 est le plus grand.

3.   3         1        2           nb1 est le plus grand.

4.   2         3        1           nb2 est le plus grand.  

5.   -1        -2       -3          nb1 est le plus grand.

6.  -3         -1       -2          nb2 est le plus grand.

7.   -2        -3       -1          nb3 est le plus grand.

8.   1         1        1           Les trois nombres sont égales

9.   -1        -1       -1          Les trois nombres sont égales

10. Vérifier qu'il n'y a pas de boucle infini

11. Rentrer 9999 comme première valeur et rentrer n,importe quel autre valeur pour les deux autres nombres afin de quitter!

12. Rentrer une lettre et le prog ne fonctionne plus.
*/