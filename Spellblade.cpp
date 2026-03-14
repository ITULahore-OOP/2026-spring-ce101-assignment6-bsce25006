#include "Spellblade.h"

Spellblade::Spellblade(string name, int health, int power, int armor, int mana, int spell)
    : Warrior(name, health, power, armor), MagicalEntity(mana, spell)
{
}

int Spellblade::calculateHybridDamage() const
{
    return getPower() + getSpellPower();
}