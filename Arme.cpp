#include <iostream>
#include <string>
#include "Arme.h"

using namespace std;

Arme::Arme() :m_nom("Lame emousser"),m_description("Simple lame abimer"),m_durabiliteMax(150),m_durabiliteActuel(150),m_degat(2000)
{

}

Arme::Arme(string titre, string description,int degat) :m_nom(titre),m_description(description), m_degat(degat),m_durabiliteMax(150),m_durabiliteActuel(150)
{

}

void Arme::afficherDescription() const
{
    cout << m_nom << " " << m_description << endl;
}

void Arme::afficherStats() const
{
    cout << m_durabiliteActuel << "/" << m_durabiliteMax << endl;
}

int Arme::getDegat() const
{
    return m_degat;
}

void Arme::perdreDurabilite()
{
    m_durabiliteActuel -= 15;
}
