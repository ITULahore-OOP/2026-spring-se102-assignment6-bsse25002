#include "Knight.h"

//Constructor
Knight::Knight(string name,int health,int power,int armorRt,int chBonus) : Warrior(name,health,power,armorRt) {
    chargeBonus = chBonus;
}

//Getter
int Knight::getChargeBonus() const {
    return chargeBonus;
}

//Functionality
int Knight::calculateBurstDamage() const {
    return getPower() + chargeBonus;
}