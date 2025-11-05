#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player
{
    // change from damage branch
	string name;
	double health_points;
	double damage;
public:
	string GetName();
    void ReceiveDamage(Player& other)
    {
        cout << name << " Receives  " << other.damage
            << " damage from " << other.name << "!" << endl;

        health_points -= other.damage;

        if (health_points < 0)
            health_points = 0;

        cout << name << "now you have " << health_points << " HP." << endl;
    }
    void Heal(double, int amount)
    {
        if (amount > 0)
        {
            this->health_points += amount;
          
            cout << this->name << " heals by " << amount << " HP." << endl;
        }
    }

};
