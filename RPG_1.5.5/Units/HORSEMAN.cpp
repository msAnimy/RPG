#include "HORSEMAN.h"



HORSEMAN::HORSEMAN(int r)
{
	//HP = rand() % 50 + 200;
	//speed = rand() % 5 + 10;
	//attack = rand() % 10 + 10;
	if (r == 1)
	{
		HP = rand() % 50 + 200;
		speed = rand() % 5 + 15;
		attack = rand() % 5 + 10;
	}
	else if (r == 2)
	{
		HP = rand() % 50 + 150;
		speed = rand() % 5 + 10;
		attack = rand() % 5 + 20;
	}
	else if (r == 3)
	{
		HP = rand() % 50 + 250;
		speed = rand() % 5 + 5;
		attack = rand() % 5 + 15;
	}
	HP_regen = HP;
}

HORSEMAN::HORSEMAN()
{
	HP = rand() % 50 + 200;
	speed = rand() % 5 + 10;
	attack = rand() % 10 + 10;
}


HORSEMAN::~HORSEMAN()
{
}

void HORSEMAN::output()
{
	cout << "\tHP\t" << this->HP << endl << "\t\t\t\tSPEED\t" << this->speed << endl
		<< "\t\t\t\tATTACK\t" << attack << endl << endl;
}
