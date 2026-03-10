#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity {
private:
    //Attributes
    int manaPool;
    int spellPower;

public:
    //Constructor
    MagicalEntity(int mana = 0,int spPower = 0);

    //Getters
    int getMana() const;
    int getSpellPower() const;
};

#endif