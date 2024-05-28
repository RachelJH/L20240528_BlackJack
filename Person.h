#pragma once
class FPerson
{
public:
	FPerson();
	virtual ~FPerson();
	int Cards[2];
	int CardTotal;

	void JudgeWinner(FPerson* Player, FPerson* Dealer);
};

