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
        cout << name << " отримує " << other.damage
            << " шкоди від " << other.name << "!" << endl;

        health_points -= other.damage;

        if (health_points < 0)
            health_points = 0;

        cout << name << " тепер має " << health_points << " HP." << endl;
    }
	void Heal(double amount);
};
