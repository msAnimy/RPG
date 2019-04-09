#include "GOBLIN.h"



GOBLIN::GOBLIN()
{
	HP = rand() % 100 + 100;
	attack = rand() % 5 + 10;
	speed = rand() % 5 + 5;
	XP = rand() % 5 + 10;
}


GOBLIN::~GOBLIN()
{
}

void GOBLIN::output()
{
	cout << "\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
		<< "\t\t\t\tATTACK\t" << attack << endl << endl;
}
