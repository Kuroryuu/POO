#include <iostream>
#include <string>
#include "Armure.h"
#include "Arme.h"

using namespace std;

Armure::Armure() :m_nom("Armure d'étoffe"),m_description("Une simple armure fait en peau de zob de Didier"),m_defense(250),m_slots(5)
{

}

Armure::Armure (string nom, string description, int defense, int slots): m_nom(nom),m_description(description),m_defense(defense),m_slots(slots)
{

}

void Armure::afficherDescription() const
{
    cout << m_nom << " " << m_description << endl;
}

void Armure::afficherStats () const
{
    cout <<"Def :"<< m_defense << " emplacements " << m_slots << endl;
}

int Armure::getDefense () const
{
    return m_defense;
}

int Armure::getSlots () const
{
    return m_slots;
}


