#ifndef HERO_H
#define HERO_H

//Includes
#include <iostream>
#include <string>
#include <string.h>

//namespace
using namespace std;

class Hero {
private:
    //Attributes
    string heroName;
    int health;
    int basePower;

public:
    //Constructor
    Hero(string name = "",int health = 0,int power = 0);

    //Destructor
    virtual ~Hero();

    //Getters
    string getName() const;
    int getHealth() const;
    int getPower() const;

    //Functionalities
    void takeDamage(int damage);
    bool operator>(const Hero &other) const;
    int operator+(const Hero &other) const;
};

#endif