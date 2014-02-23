#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arme.h"
#include "Armure.h"

using namespace std;

Personnage::Personnage() :m_hpMax(9999),m_hpActuel(9999), m_fury(100), m_defense(90), m_coup(35)
{

}

Personnage::Personnage(string nom,string titre,string description,int degat, string nomArmure, string descriptionArmure,int defense, int slots) :m_hpMax(9999),m_hpActuel(9999), m_fury(100), m_defense(90), m_coup(35),m_nom(nom),m_arme(titre,description,degat),m_armure(nomArmure,descriptionArmure,defense,slots)
{

}

void Personnage::attaquer(Personnage &cible)
{
    cible.subirDegat();
    m_arme.perdreDurabilite();
}

void Personnage::deplacer(int x)
{

    x=+25;
}

void Personnage::subirDegat()
{
    m_hpActuel -= (m_arme.getDegat()/m_armure.getDefense())*12;
}

void Personnage::afficherEtat() const
{
    cout << m_nom << " " << m_hpActuel <<"/"<<m_hpMax<<"HP"<< endl;
    m_arme.afficherStats();
    m_arme.afficherDescription();
    m_armure.afficherDescription();
    m_armure.afficherStats();
}
