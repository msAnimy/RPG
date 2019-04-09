#include "GOBLIN_HORSEMAN.h"



GOBLIN_HORSEMAN::GOBLIN_HORSEMAN()
{
	HP = rand() % 175 + 125;
	attack = rand() % 5 + 15;
	speed = rand() % 5 + 10;
	XP = rand() % 5 + 20;
}


GOBLIN_HORSEMAN::~GOBLIN_HORSEMAN()
{
}

void GOBLIN_HORSEMAN::output()
{
	cout << "\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
		<< "\t\t\t\tATTACK\t" << attack << endl << endl;
}
