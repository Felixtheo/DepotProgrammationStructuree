// Expliquer les bases d'un programme C++


// Ceci est un commentaire sur une seule ligne

/* Ceci est un commentaire

qui peut s'�tendre

sur plusieurs lignes */

// Les inclusions de biblioth�ques doivent �tre avant le bloc 'main'
#include <iostream>  // Canal d'entr�es et sorties


int main()  // Point d'entr�e du programme
{
   setlocale(LC_ALL, ""); // Pour permettre l'affichage correcte des caract�res accentu�s

   // Affiche un message � l'�cran
   // \n : un changement de ligne
   std::cout << "Bonjour � tous\n";

   // On demande au syst�me de faire une pause pour permettre de lire
   // les messages affich�s par le programme
   system("pause");

   // On demande au syst�me d'effacer l'�cran (CLear Screen)
   system("cls");

   // \" : un " non interpr�t� par le compilateur
   std::cout << "Bienvenue\n au cours de \"Programmation Structur�e\"\n\n\n";

   // On peut ins�rer plusieurs �l�ments l'un � la suite de l'autre
   std::cout << "Bonne session " << "automne " << 2022 << "\n";
}
