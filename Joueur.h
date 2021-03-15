/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: Joueur.h
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 05/02/2021
// Rôle du fichier: Contient la déclaration des attributs et méthodes de la classe qui représente un joueur
// Nom des composants utilises: string
// Historique du fichier:
// création de l'attribut prenom du joueur par Luc Rivière le 15/03/2021
// déclaration de la méthode CalculerMoyEssais par Luc Rivière le 15/03/2021
/*************************************************/
#include <string>
using namespace std;



class CJoueur {

    public:

    // Nom :CJoueur  Constructeur
    // Rôle : Initialise toutes les informations du joueur.
    //        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
    // Paramètre d'entrée : le nom du joueur
    // Sortie : le joueur créé

    CJoueur(string un_prenom, string un_nom);

    // Nom :CJoueur Destructeur
    // Rôle : Afficher le nom du joueur qui va être détruit ainsi que son adresse.
    // Sortie : le nom du joueur qui sera détruit et son adresse

    ~CJoueur();


    // Nom : MajResultats
    // Rôle : met à jour les informations d'un joueur
    // Paramètres d'entrée:
    //                  - le nombre d'essais
    //                  - gagne qui vaut true si le joueur a gagné, false sinon
    // Entrée/sortie :
    //                  le joueur dont on met à jour les résultats

    void MajResultats(int nbEssais, bool gagne);

    // Nom : Resultats
    // Rôle : indique les résultats d'un joueur
    //        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
    //        La fonction N'affiche PAS les informations à l'écran
    // Paramètres de sortie:
    //                      - le nombre de succès,
    //                      - le nombre d'échecs
    //                      - le nombre total d'essais
    // Entrée :
    //            -le joueur dont on veut les résultats

    void Resultats(int &nbsucces, int &nbechec, int & nbessais);


    // Nom : CalculerMoyEssais
    // Rôle : calcule la moyenne des essais pour un joueur
    // Paramètres d'entrée/sortie: nombre de tentatives par moyenne




    void CalculerMoyEssais(float &nbEssaisMoy);


    // Nom :Nom
    // Rôle : retourne le nom d'un joueur
    // Entrée: le joueur dont on veut le nom
    // Valeur de retour : nom du joueur
    // Entrée : le joueur dont on veut le nom

    string Prenom();

    string Nom();



    private :

        string prenom;  // prenom du joueur
        string nom;     // nom du joueur
        int nbPartiesJouees;
        int nbPartiesGagnees;
        int nbTentatives;

};






