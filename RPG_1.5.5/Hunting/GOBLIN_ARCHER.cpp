#include "GOBLIN_ARCHER.h"



GOBLIN_ARCHER::GOBLIN_ARCHER()
{
	HP = rand() % 100 + 150;
	attack = rand() % 6 + 12;
	speed = rand() % 5 + 7;
	range = rand() % 5 + 25;
	XP = rand() % 5 + 15;
}


GOBLIN_ARCHER::~GOBLIN_ARCHER()
{
}

void GOBLIN_ARCHER::output()
{
	cout << "\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
		<< "\t\t\t\tATTACK\t" << attack << endl << "\t\t\t\tRANGE\t" << range << endl;
}

