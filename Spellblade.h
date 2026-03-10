#ifndef SPELLBLADE_H
#define SPELLBLADE_H

//Includes
#include "Warrior.h"
#include "MagicalEntity.h"

class Spellblade : public Warrior, public MagicalEntity {
public:
    //Constructor
    Spellblade(string name = "",int health = 0,int power = 0,int armorRt = 0,int mana = 0,int spPower = 0);

    //Functionality
    int calculateHybridDamage() const;
};

#endif