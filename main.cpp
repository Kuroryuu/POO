#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arme.h"
#include "Armure.h"

using namespace std;

int main()
{

    Personnage Kuroryuu("Kuroryuu","Double O","Lame composer de vide, tout ce qui est en contact avec la lame devien le vide",9500,"La Pismont","Une extraordinaire armure faite en cuir de saucisse",95,17), Shirohime("Shirohime","Dragon scale","Lame composé de lumiere qui trouble toute matiére",8500,"Armure Didier","Armure toute nul",20,0),AlphaOne("MasukiYama","Soul Hunger","Lame composer d'ame",6750,"Black Unslought","Amore supreme",100,20);


    Kuroryuu.attaquer(Shirohime);
    Shirohime.attaquer(Kuroryuu);

    Kuroryuu.afficherEtat();
    Shirohime.afficherEtat();

    AlphaOne.afficherEtat();

    return 0;
}
