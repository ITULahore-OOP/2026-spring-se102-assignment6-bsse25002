#include "Hero.h"

//Constructor
Hero::Hero(string name,int health,int power) {
    heroName = name;
    this->health = health;
    basePower = power;
}

//Destructor
Hero::~Hero() {}

//Getters
string Hero::getName() const {
    return heroName;
}

int Hero::getHealth() const {
    return health;
}

int Hero::getPower() const {
    return basePower;
}

//Functionalities
void Hero::takeDamage(int damage) {
    if((health - damage) < 0) {
        health = 0;
    } else {
        health -= damage;
    }
}

bool Hero::operator>(const Hero &other) const {
    if(basePower > other.basePower) {
        return true;
    } else {
        return false;
    }
}

int Hero::operator+(const Hero &other) const {
    return health + other.health;
}