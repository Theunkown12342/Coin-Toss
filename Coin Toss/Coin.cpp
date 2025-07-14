#include "Coin.h"
#include <iostream>
using namespace std;
Coin::Coin() : centValue(1) { IsHeads = true; }


Coin::Coin(int value) : centValue(value) {
	flip();
}



void Coin::flip()
{
		IsHeads = rand() % 2;
}
bool Coin::isItHeads()const
{
	return IsHeads;
}

string Coin::getSideUp()const
{
	if (IsHeads == 1) {
		return "Heads";
	}
	else {
		return "Tails";
	}
}
int Coin::getCentValue()const
{
	return centValue;
}
