#ifndef WARRIOR_H
#define WARRIOR_H

//Includes
#include "Hero.h"

class Warrior : public Hero {
private:
    //Warrior's Extended Attribute
    int armorRating;
public:
    //Constructor
    Warrior(string name = "",int health = 0,int power = 0,int armorRt = 0);

    //Getter
    int getArmor() const;

    //Functionality
    int calculateEffectiveHealth() const;
};

#endif