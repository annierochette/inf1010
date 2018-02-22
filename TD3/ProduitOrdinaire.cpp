/********************************************
* Titre: Travail pratique #3 - ProduitOrdinaire.h
* Date: 
* Auteur:
*******************************************/


#include <string>
#include <iostream>
#include "ProduitOrdinaire.h"
#include "Fournisseur.h"
using namespace std;

ProduitOrdinaire::ProduitOrdinaire():
    estTaxable_{ true }
{}

ProduitOrdinaire::ProduitOrdinaire(bool estTaxable) :
    estTaxable_(estTaxable)
{}


bool ProduitOrdinaire::obtenirEstTaxable() const
{
    
    return estTaxable_;
}

void ProduitOrdinaire::modifierEstTaxable(bool estTaxable){
    
    estTaxable_ = estTaxable;
    
}

ostream& operator<<(ostream& os, const ProduitOrdinaire& produit){
    
    
}

istream& operator>>(istream& is, ProduitOrdinaire& produit){
    
    
}
