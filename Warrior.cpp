#include "Warrior.h"

//Constructor
Warrior::Warrior(string name,int health,int power,int armorRt) : Hero(name,health,power) {
    armorRating = armorRt;
}

//Getters
int Warrior::getArmor() const {
    return armorRating;
}

//Functionality
int Warrior::calculateEffectiveHealth() const {
    return getHealth() + (armorRating*2);
}