#include "Person.h"
#include <iostream>
#include "Deck.h"
using namespace std;

FPerson::FPerson()
{
	CardTotal = 0;
	for (int i = 0; i < 2; i++)
	{
		Cards[i] = 0;
	}
}

FPerson::~FPerson()
{
}


void FPerson::JudgeWinner(FPerson* Player, FPerson* Dealer)
{
	if (Dealer->CardTotal > 21)
	{
		cout << "½Â¸®" << endl;
	}
	else if (Dealer->CardTotal <= 21 && Player->CardTotal > 21)
	{
		cout << "ÆÐ¹è" << endl;
	}
	else //if (ComputerTotal <= 21 && PlayerTotal <= 21)
	{
		if (Dealer->CardTotal > Player->CardTotal)
		{
			cout << "ÆÐ¹è" << endl;
		}
		else
		{
			cout << "½Â¸®" << endl;
		}
	}
}


