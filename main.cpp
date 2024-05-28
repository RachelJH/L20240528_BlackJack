#include <iostream>
#include "Dealer.h"
#include "Deck.h"
#include "Person.h"
#include "Player.h"
using namespace std;

int main()
{
	srand(time(nullptr));
	FDeck* Deck = new FDeck();
	FPerson* Player = new FPlayer();
	FPerson* Dealer = new FDealer();

	
		Deck->Shuffle();
		Deck->DrawCard(Player, Dealer);
		Deck->ShowCard(Player, Dealer);
		Dealer->JudgeWinner(Player, Dealer);

	
	return 0;
}
