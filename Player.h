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
	void ReceiveDamage(Player& other);
    void Heal(double, int amount)
    {
        if (amount > 0)
        {
            this->health_points += amount;

            cout << this->name << " лікується на " << amount << " од. здоров'я." << endl;
        }
    }
};
