#ifndef ARMURE_H_INCLUDED
#define ARMURE_H_INCLUDED

#include <iostream>
#include <string>

class Armure
{
    private :
    int m_defense;
    int m_slots;

    std::string m_nom;
    std::string m_description;

    public :
    Armure();
    Armure(std::string nom, std::string description, int defense, int slots);
    void afficherDescription() const;
    void afficherStats() const;
    int getDefense() const;
    int getSlots() const;




};
#endif
