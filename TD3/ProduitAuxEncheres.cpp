/********************************************
* Titre: Travail pratique #3 - ProduitAuxEncheres.cpp
* Date: 
* Auteur:
*******************************************/

#include "ProduitAuxEncheres.h"

ProduitAuxEncheres::ProduitAuxEncheres():
    prixBase_{0},
    identifiantClient_{0}
{
}

ProduitAuxEncheres::ProduitAuxEncheres(double prixBase, int identifiantClient):
    prixBase_(prixBase),
    identifiantClient_(identifiantClient)
{
}

int ProduitAuxEncheres::obtenirIdentifiantClient() const
{
    return identifiantClient_;
}

double ProduitAuxEncheres::obtenirPrixBase() const
{
    return identifiantClient_;
}

void ProduitAuxEncheres::modifierIdentifiantClient(int identifiantClient)
{
    identifiantClient_ = identifiantClient;
}

void ProduitAuxEncheres::modifierPrixBase(double prixBase)
{
    prixBase_ = prixBase;
}

istream& operator>>(istream& is, ProduitAuxEncheres& produit)
{
    
}

ostream& operator<<(ostream& os, const ProduitAuxEncheres& produit)
{

}
