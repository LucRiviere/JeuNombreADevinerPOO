/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: CPartie
//                              CJoueur
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/Partie.h"

int main()
{
    //Cr�ation d'un joueur
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    string un_nom;
    string un_prenom;
    cout << "Veuillez entrer votre prenom" << endl;
    cin >> un_prenom;
    cout << "Veuillez entrer votre nom" << endl;
    cin >> un_nom;

    //Cr�ation d'un joueur 2

    string un_nom2;
    string un_prenom2;
    cout << "Veuillez entrer votre prenom" << endl;
    cin >> un_prenom2;
    cout << "Veuillez entrer votre nom" << endl;
    cin >> un_nom2;


    // Cr�ation des joueurs
    CJoueur joueur (un_prenom,un_nom);
    CJoueur joueur2 (un_prenom2,un_nom2);



    cout << "----------------------------------------------"<< endl;
    cout << "Combien de parties voulez-vous jouer ?" << endl;
    int nbParties;
    cin >> nbParties;
    int nbParties2=nbParties;


    for (int i = 0; i <nbParties; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4);  // nombre � deviner entre 0 et 10, nombre de tentatives maximum  pour joueur 1
        CPartie partie2 (0,10,4); // nombre � deviner entre 0 et 10, nombre de tentatives maximum 4 pour joueur 2

        partie.Jouer(joueur,joueur);
        partie2.Jouer(joueur2,joueur2); // ex�cution d'une partie pour le joueur
    }


    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur " << joueur.Prenom() << " " << joueur.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    int nbsucces, nbechecs, nbessais;
    float nbEssaisMoy;
    joueur.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence
    joueur.CalculerMoyEssais (nbEssaisMoy);

    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "Nombre de tentatives en moyenne par partie : " << nbEssaisMoy << endl;

    cout << "----------------------------------------------"<< endl;

    cout <<"-----------------------------------------------"<< endl;
    cout <<"Affichage des resultats du joueur" << joueur2.Prenom() << " " << joueur2.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    int nbsucces2, nbechecs2, nbessais2;
    float nbEssaisMoy2;
    joueur2.Resultats(nbsucces2, nbechecs2, nbessais2);  // les param�tres sont pass�s par r�f�rence
    joueur2.CalculerMoyEssais(nbEssaisMoy2);

    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces2 << endl;
    cout << "Nombre de parties perdues : " << nbechecs2 << endl;
    cout << "Nombre de tentatives totales : " << nbessais2 << endl;
    cout << "Nombre de tentatives en moyenne par partie : " << nbEssaisMoy2 << endl;

    cout << "----------------------------------------------"<< endl;

    if(nbsucces>nbsucces2)
        {
        cout << "Le gagnant est : "<< joueur.Prenom()<< " " << joueur.Nom()<< endl;
        cout << "Le perdant est : "<<joueur2.Prenom()<< " " <<  joueur2.Nom()<< endl;
        }
    else if(nbsucces2>nbsucces)
        {
        cout << "Le gagnant est : " << joueur2.Prenom()<< " " << joueur2.Nom()<< endl;
        cout <<" Le perdant est : " << joueur.Prenom()<< " " <<  joueur.Nom()<< endl;
        }
    else
        {
        cout << "Les joueurs sont ex aequo  "<< endl;
        cout <<" Vous avez les memes scores !  "<< joueur.Prenom()<<" "<<joueur.Nom()<<" " << joueur2.Prenom() << joueur2.Nom() << endl;
        }
    return 0;
}

