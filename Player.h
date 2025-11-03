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
	void Heal(double amount);
};
