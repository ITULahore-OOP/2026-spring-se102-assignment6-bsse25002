#ifndef KNIGHT_H
#define KNIGHT_H

//Includes
#include "Warrior.h"

class Knight : public Warrior {
private:
    //Knight's Extended Attribute
    int chargeBonus;

public:
    //Constructor
    Knight(string name = "",int health = 0,int power = 0,int armorRt = 0,int chBonus = 0);

    //Getter
    int getChargeBonus() const;

    //Functionality
    int calculateBurstDamage() const;
};

#endif