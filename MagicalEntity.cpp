#include "MagicalEntity.h"

//Constructor
MagicalEntity::MagicalEntity(int mana,int spPower) {
    manaPool = mana;
    spellPower = spPower;
}

//Getters
int MagicalEntity::getMana() const {
    return manaPool;
}

int MagicalEntity::getSpellPower() const {
    return spellPower;
}