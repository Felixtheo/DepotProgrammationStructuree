// Expliquer les bases d'un programme C++


// Ceci est un commentaire sur une seule ligne

/* Ceci est un commentaire

qui peut s'étendre

sur plusieurs lignes */

// Les inclusions de bibliothèques doivent être avant le bloc 'main'
#include <iostream>  // Canal d'entrées et sorties


int main()  // Point d'entrée du programme
{
   setlocale(LC_ALL, ""); // Pour permettre l'affichage correcte des caractères accentués

   // Affiche un message à l'écran
   // \n : un changement de ligne
   std::cout << "Bonjour à tous\n";

   // On demande au système de faire une pause pour permettre de lire
   // les messages affichés par le programme
   system("pause");

   // On demande au système d'effacer l'écran (CLear Screen)
   system("cls");

   // \" : un " non interprété par le compilateur
   std::cout << "Bienvenue\n au cours de \"Programmation Structurée\"\n\n\n";

   // On peut insérer plusieurs éléments l'un à la suite de l'autre
   std::cout << "Bonne session " << "automne " << 2022 << "\n";
}
