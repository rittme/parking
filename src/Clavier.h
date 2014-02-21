/*************************************************************************
                           Clavier  -  description
                             -------------------
    début                : 21 février 2014 
    copyright            : (C) Parking par Bernardo RITTMEYER
					   Adrien GARCIA
    e-mail               : bernardo.rittmeyer@insa-lyon.fr
			   adrien.garcia@insa-lyon.fr 
*************************************************************************/

//---------- Interface de la tâche <Clavier> (fichier Clavier.h) -------
#if ! defined ( CLAVIER_H )
#define CLAVIER_H

//------------------------------------------------------------------------
// Rôle de la tâche <Clavier>
//
//
//------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
// type Nom ( liste de paramètres );
// Mode d'emploi :
//
// Contrat :
//

void Clavier();
void Commande(char code, unsigned int valeur);
#endif // CLAVIER_H

