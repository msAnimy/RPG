#include "ARCHER.h"



ARCHER::ARCHER(int r)
{
	/*HP = rand() % 50 + 125;
	speed = rand() % 5 + 7;
	attack = rand() % 5 + 10;
	range = rand() % 10 + 20;*/
	if (r == 1)
	{
		HP = rand() % 50 + 125;
		speed = rand() % 5 + 17;
		attack = rand() % 5 + 5;
		range = rand() % 5 + 20;
	}
	else if (r == 2)
	{
		HP = rand() % 50 + 75;
		speed = rand() % 5 + 12;
		attack = rand() % 5 + 15;
		range = rand() % 5 + 10;
	}
	else if (r == 3)
	{
		HP = rand() % 50 + 175;
		speed = rand() % 5 + 7;
		attack = rand() % 5 + 10;
		range = rand() % 5 + 15;
	}
	HP_regen = HP;
}

ARCHER::ARCHER()
{
	HP = rand() % 50 + 125;
	speed = rand() % 5 + 7;
	attack = rand() % 5 + 10;
	range = rand() % 10 + 20;
}


ARCHER::~ARCHER()
{
}

void ARCHER::output()
{
	cout << "\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
		<< "\t\t\t\tATTACK\t" << attack << endl << "\t\t\t\tRANGE\t" << range << endl << endl;
}