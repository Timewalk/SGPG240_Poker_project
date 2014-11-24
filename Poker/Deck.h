#include <time.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

static struct CARD
{
public:
	string name;
	int suit;
	int number;
	float value;

};

static struct DECK
{
public:
	DECK();
	CARD cards[52];
	const int count = 52;
	void Shuffle();
	void Print();
};
