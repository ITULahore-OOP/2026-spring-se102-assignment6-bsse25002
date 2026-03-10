#ifndef GUILD_H
#define GUILD_H

//Includes
#include <ostream>
#include "Spellblade.h"
#include "Knight.h"

class Guild {
private:
    //Attributes
    string guildName;
    Hero* roster[15];
    int memberCount;

public:
    //Constructor
    Guild(string name = "");

    //Destructor
    ~Guild();

    //Getters
    Hero* getHero(int idx) const;
    int getMemberCount() const;

    //Functionalities
    int calculateTotalGuildPower();
    void displayGuildStats();
    void operator+=(Hero* newHero);
    friend ostream& operator<<(ostream &os,const Guild &g);
};

#endif