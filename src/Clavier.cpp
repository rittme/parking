/*************************************************************************
                           Clavier  -  description
                             -------------------
    début                : 21 Février 2014 
    copyright            : (C) Parking par Clavier
    e-mail               : Clavier
*************************************************************************/

//---------- Réalisation de la tâche <Clavier> (fichier Clavier.cpp) ---

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "Clavier.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
void Clavier ( )
// Algorithme :
//
{
	menu();
} //----- fin de Clavier

void Commande(char code, unsigned int valeur)
{
	switch (code) 
	{
		case 'Q' : 
			exit(0);
			break;
		case 'P' :
			break;
		case 'A' :
			break;
		case 'S' :
			break;
	}
}
