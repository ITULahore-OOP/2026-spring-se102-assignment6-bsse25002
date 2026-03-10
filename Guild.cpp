#include "Guild.h"

//Constructor
Guild::Guild(string name) {
    guildName = name;
    memberCount = 0;
}

//Destructor
Guild::~Guild() {
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

//Getter
Hero* Guild::getHero(int idx) const{
    return roster[idx];
}

int Guild::getMemberCount() const {
    return memberCount;
}

//Functionalities
int Guild::calculateTotalGuildPower() {
    int total = 0;

    for(int i = 0;i < memberCount;i++) {
        total += roster[i]->getPower();
    }

    return total;
}

void Guild::displayGuildStats() {
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

void Guild::operator+=(Hero* newHero) {
    if(memberCount >= 15) {
        cout << "Guild is at full capacity!" << endl;
        return;
    }

    roster[memberCount] = newHero;
    memberCount++;

    cout << "Hero " << newHero->getName() << " added to the guild " << guildName << endl;
}

ostream& operator<<(ostream &os,const Guild &g) {
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;

    for(int i = 0;i < g.memberCount;i++) {
        os << i << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }

    return os;
}