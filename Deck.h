#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	int Cards[52];
	string CardType[4] = {"Diamond","Spade", "Clover", "Heart"};

	void Shuffle();
	void DrawCard(FPerson* Player, FPerson* Dealer);
	int DefineCard(int CardNumber);
	int DefineType(int CardNumber);
	void ShowCard(FPerson* Player, FPerson* Dealer);

};


