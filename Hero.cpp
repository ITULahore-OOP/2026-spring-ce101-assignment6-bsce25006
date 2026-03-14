#include "Hero.h"

Hero::Hero(string name, int h, int p)
{
    heroName = name;
    health = h;
    basePower = p;
}

string Hero::getName() const
{
    return heroName;
}

int Hero::getHealth() const
{
    return health;
}

int Hero::getPower() const
{
    return basePower;
}

void Hero::takeDamage(int damage)
{
    health = health - damage;

    if (health < 0)
    {
        health = 0;
    }
}

bool Hero::operator>(const Hero &other) const
{
    if (basePower > other.basePower)
        return true;
    else
        return false;
}

int Hero::operator+(const Hero &other) const
{
    return health + other.health;
}