// Démontrer les types de base et l'utilisation de variables

#include <iostream>

int main()
{
   setlocale(LC_ALL, "");

   int nombre;

   // nombre n'est pas initialisée, on ne peut pas lire sa valeur
   //std::cout << "La valeur de nombre est " << nombre << "\n";

   // Un nom de variable doit être unique
   // Pas valide de déclarer une autre variable avec le même nom
   //int nombre;

   // assigne la valeur 12 à la variable, écrit 12 en mémoire
   nombre = 12;

   // On lit la valeur en mémoire et on l'affiche à l'écran
   std::cout << "La valeur de nombre est " << nombre << "\n";

   // La valeur assignée provient d'une autre variable
   int autreNombre = nombre;
   std::cout << "Autre nombre est " << autreNombre << "\n";

   // Modifie la valeur en mémoire, écrase l'ancienne
   nombre = 34;
   std::cout << "La valeur de nombre est maintenant " << nombre << "\n";
   std::cout << "Autre nombre est " << autreNombre << "\n";

   // On combine la déclaration et l'assignation en mémoire (initialisation)
   int monNombrePrefere = -15;

   
   //Variable pour contenir un nombre réel
   double nombreReel = 3.1416;
   std::cout << "Nombre réel = " << nombreReel << "\n";

   //variable pour contenir un, et un seul, caractere
   char caractere = 'a';
   caractere = '2'; //represente le caractere 2 et nom la valeur numerique 2
   caractere = '@';
   std::cout << "caractere = " << caractere << "\n";

   // variable pour contenir une chaine de caracteres
   std::string chaine = "Une chaine\nde\ncaractères";
   std::cout << chaine << "\n";
   chaine = "x";
   chaine = "";

   //conversion de types 
   int entier = 1000;
   double entierConvertiEnReel = double(entier); //entierConvertiEnReel = 1000.0

   double reel = 2.9999;
   // reelConvertieEnEntier vaut 2, pas d'arrondie, seule la partie entière est conservée
   int reelConvertieEnEntier = int(reel);
   std::cout << "entierConvertieEnEntier = " << entierConvertiEnReel << "\n";
   std::cout << "reelConvertieEnEntier = " << reelConvertieEnEntier << "\n";

   
   // Lecture au clavier
   std::cout << "Entrez un nombre entier\n> ";
   int entierUtilisateur;
   std::cin >> entierUtilisateur;
   // la lecture est faite lorsque l'utilisateur tape enter
   std::cout << "votre nombre est: " << entierUtilisateur << "\n";

   std::cout << "entrez un nombre réel: ";
   double reelUtilisateur;
   std::cin >> reelUtilisateur;
   std::cout << "votre nombre reel est: " << reelUtilisateur << "\n";

   std::cout << "entrez un caractere";
   char caractereUtilisateur;
   std::cin >> caractereUtilisateur;
   std::cout << "votre caractere est: " << caractereUtilisateur << "\n";

   std::cout << "Entrez un mot: ";
   std::string chaineUtilisateur;
   //la lecture d'une string va lire tout les caracteres jusqu'à une espace
   //ou un changement de ligne
   // !!! ON NE VA PAS POUVOIR LIRE DES CARACTÈRES ACCENTUÉS
   std::cin >> chaineUtilisateur;
   std::cout << "votre mot est: " << chaineUtilisateur << "\n";

   std::cout << "entrez votre prenom, votre nom et votre age :";
   std::string prenom;
   std::string nom;
   int age;
   std::cin >> prenom >> nom >> age;
   std::cout << " bonjour " << prenom << " " << nom << ", vous avez " << age << "ans\n";



}