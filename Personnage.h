#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
//Definition de la classe personnage

#include <iostream>
#include <string>
#include "Arme.h"
#include "Armure.h"

class Personnage
{
  private:

  int m_hpMax;
  int m_hpActuel;
  int m_fury;
  int m_defense;
  int m_coup;

  std::string m_nom;

  public:

  Personnage();
  Personnage(std::string nom,std::string titre,std::string description,int degat,std::string nomArmure, std::string descriptionArmure, int defense, int slots);
  void attaquer(Personnage &cible);
  void deplacer(int x);
  void subirDegat();
  void afficherEtat() const;
  Arme m_arme;
  Armure m_armure;

};

#endif // PERSONNAGE_H_INCLUDED
