#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include <iostream>
#include <string>

class Arme
{
    private:

    double m_durabiliteMax;
    double m_durabiliteActuel;
    int m_degat;

    std::string m_nom;
    std::string m_description;

    public:

    Arme();
    Arme(std::string titre,std::string description,int degat);
    void afficherDescription() const;
    void afficherStats() const;
    void perdreDurabilite();
    int getDegat() const;

};

#endif
