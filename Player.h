#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player
{
	string name;
	double health_points;
	double damage;
public:
	string GetName();
    void ReceiveDamage(Player& other)
    {
        cout << name << " îòðèìóº " << other.damage
            << " øêîäè â³ä " << other.name << "!" << endl;

        health_points -= other.damage;

        if (health_points < 0)
            health_points = 0;

        cout << name << " òåïåð ìàº " << health_points << " HP." << endl;
    }
    void Heal(double, int amount)
    {
        if (amount > 0)
        {
            this->health_points += amount;

            cout << this->name << " ë³êóºòüñÿ íà " << amount << " îä. çäîðîâ'ÿ." << endl;
        }
    }

};
