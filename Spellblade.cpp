#include "Spellblade.h"

//Constructor
Spellblade::Spellblade(string name,int health,int power,int armorRt,int mana,int spPower) : Warrior(name,health,power,armorRt), MagicalEntity(mana,spPower) {}

//Functionality
int Spellblade::calculateHybridDamage() const {
    return getPower() + getSpellPower();
}