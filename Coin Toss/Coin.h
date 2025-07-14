#ifndef COIN
#define COIN
#include <iostream>
using namespace std;
class Coin
{
private:
	bool IsHeads;
	const int centValue;

public:
	Coin();
	Coin(int value);

	void flip();
	bool isItHeads()const;

	string getSideUp()const;
	int getCentValue()const; 


};

#endif
