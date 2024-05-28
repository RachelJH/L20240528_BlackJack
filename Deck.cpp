#include "Deck.h"
#include <iostream>
using namespace std;
FDeck::FDeck()
{
	for (int i = 0; i < 52; i++)
	{
		Cards[i] = i + 1;
	}
	
}

FDeck::~FDeck()
{
}

void FDeck::Shuffle()
{
	for (int i = 0; i < 1000; i++)
	{
		int Card1 = rand() % 52;
		int Card2 = rand() % 52;
		int Temp;
		Temp = Cards[Card1];
		Cards[Card1] = Cards[Card2];
		Cards[Card2] = Temp;
	}
}

void FDeck::DrawCard(FPerson* Player, FPerson* Dealer)
{
	int CardCount = 0;
	for (int i = 0; i < 2; ++i)
	{
		Player->Cards[i] = Cards[CardCount];
		Player->CardTotal += DefineCard(Player->Cards[i]);
		CardCount++;
	}
	for (int i = 0; i < 2; ++i)
	{
		Dealer->Cards[i] = Cards[CardCount];
		Dealer->CardTotal += DefineCard(Dealer->Cards[i]);
		CardCount++;
	}
}

int FDeck::DefineCard(int CardNumber)
{
	return ((CardNumber %12)+1);
}

int FDeck::DefineType(int CardNumber)
{
	return CardNumber / 13;
}

void FDeck::ShowCard(FPerson* Player, FPerson* Dealer)
{
	cout << "Player" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << CardType[DefineType(Player->Cards[i])];
		cout << DefineCard(Player->Cards[i]) << endl;
	}
	cout << "Dealer" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << CardType[DefineType(Dealer->Cards[i])];
		cout << DefineCard(Dealer->Cards[i]) << endl;
	}
}
