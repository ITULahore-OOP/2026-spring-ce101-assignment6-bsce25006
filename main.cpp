#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    // Creating heroes
    Hero h1("Aragorn", 100, 50);
    Warrior w1("Gimli", 120, 40, 10);
    Knight k1("Arthur", 150, 60, 20, 25);
    Spellblade s1("Eldric", 110, 55, 8, 100, 35);

    // Demonstrating hero operators
    if (k1 > h1)
        cout << k1.getName() << " is stronger than " << h1.getName() << endl;

    cout << "Combined vitality of Aragorn and Arthur: "
         << (h1 + k1) << endl;

    // Warrior ability
    cout << "Gimli Effective Health: "
         << w1.calculateEffectiveHealth() << endl;

    // Knight ability
    cout << "Arthur Burst Damage: "
         << k1.calculateBurstDamage() << endl;

    // Spellblade ability
    cout << "Eldric Hybrid Damage: "
         << s1.calculateHybridDamage() << endl;

    // Creating guild
    Guild g("Eldoria Guild");

    g += &h1;
    g += &w1;
    g += &k1;

    // Print guild
    cout << endl;
    cout << g;

    cout << endl;
    g.displayGuildStats();

    return 0;
}