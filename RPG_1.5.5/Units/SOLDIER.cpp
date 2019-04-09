#include "SOLDIER.h"



SOLDIER::SOLDIER(int r)
{
	//HP = rand() % 50 + 150;
	//speed = rand() % 5 + 5;
	//attack = rand() % 10 + 5;
	//HP_regen = HP;

	if (r == 1)
	{
		HP = rand() % 50 + 150;
		speed = rand() % 5 + 15;
		attack = rand() % 5 + 5;	
	}
	else if (r == 2)
	{
		HP = rand() % 50 + 100;
		speed = rand() % 5 + 10;
		attack = rand() % 5 + 15;
	}
	else if (r == 3)
	{
		HP = rand() % 50 + 200;
		speed = rand() % 5 + 5;
		attack = rand() % 5 + 10;
	}
	HP_regen = HP;
}

SOLDIER::SOLDIER()
{
	HP = rand() % 50 + 150;
	speed = rand() % 5 + 5;
	attack = rand() % 10 + 5;
	//HP_regen = HP;

}


SOLDIER::~SOLDIER()
{
}

void SOLDIER::output()
{
	cout << "\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
		<< "\t\t\t\tATTACK\t" << attack << endl << endl;
}