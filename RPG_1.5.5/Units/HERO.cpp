#include "HERO.h"



HERO::HERO(string &NAME, int i, int r)
{
	if (r == 1)
	{
		if (i == 1)
		{
			HP = rand() % 50 + 300;
			speed = rand() % 5 + 25;
			attack = rand() % 5 + 25;

			ID = 1;
		}
		else if (i == 2)
		{
			HP = rand() % 50 + 325;
			speed = rand() % 5 + 30;
			attack = rand() % 5 + 20;
			range = rand() % 5 + 30;
			ID = 2;
		}
		else if (i == 3)
		{
			HP = rand() % 50 + 250;
			speed = rand() % 5 + 30;
			attack = 0;
			regen = rand() % 50 + 100;
			ID = 3;
		}
	}
	else if (r == 2)
	{
		if (i == 1)
		{
			HP = rand() % 50 + 250;
			speed = rand() % 5 + 20;
			attack = rand() % 5 + 35;

			ID = 1;
		}
		else if (i == 2)
		{
			HP = rand() % 50 + 275;
			speed = rand() % 5 + 25;
			attack = rand() % 5 + 30;
			range = rand() % 5 + 20;
			ID = 2;
		}
		else if (i == 3)
		{
			HP = rand() % 50 + 200;
			speed = rand() % 5 + 25;
			attack = 0;
			regen = rand() % 50 + 150;
			ID = 3;
		}
	}
	else if (r == 3)
	{
		if (i == 1)
		{
			HP = rand() % 50 + 350;
			speed = rand() % 5 + 20;
			attack = rand() % 5 + 30;

			ID = 1;
		}
		else if (i == 2)
		{
			HP = rand() % 50 + 375;
			speed = rand() % 5 + 20;
			attack = rand() % 5 + 25;
			range = rand() % 5 + 25;
			ID = 2;
		}
		else if (i == 3)
		{
			HP = rand() % 50 + 300;
			speed = rand() % 5 + 20;
			attack = 0;
			regen = rand() % 50 + 50;
			ID = 3;
		}
	}
	mana = 50;
	XP = rand() % 50 + 50;
	LVL = 1;
	name = NAME;
	HP_regen = HP;
}

HERO::HERO(int i)
{
	if (i == 1)
	{
		HP = rand() % 50 + 300;
		speed = rand() % 5 + 20;
		attack = rand() % 10 + 20;
		mana = 50;
		ID = 1;
	}
	else if (i == 2)
	{
		HP = rand() % 50 + 275;
		speed = rand() % 5 + 25;
		attack = rand() % 5 + 20;
		range = rand() % 10 + 30;
		mana = 50;
		ID = 2;
	}
	else if (i == 3)
	{
		HP = rand() % 50 + 250;
		speed = rand() % 5 + 25;
		attack = 0;
		regen = rand() % 50 + 50;
		mana = 50;
		ID = 3;
	}
	XP = rand() % 50 + 50;
	LVL = 1;
}
HERO::HERO()
{
	/*HP = rand() % 50 + 300;
	speed = rand() % 5 + 20;
	attack = rand() % 10 + 20;
	mana = 50;*/
}
HERO::~HERO()
{
}

void HERO::output()
{
	cout << endl;
	if (ID == 1)
	{
		cout << "\t\t\t\tSOLDIER" << endl << "\t\t\t\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
			<< "\t\t\t\tATTACK\t" << attack << endl << "\t\t\t\tMANA\t" << mana << endl
			<< "\t\t\t\tLVL\t" << LVL << endl << "\t\t\t\tXP\t" << XP << endl;
	}
	else if (ID == 2)
	{
		cout << "\t\t\t\tARCHER" << endl << "\t\t\t\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
			<< "\t\t\t\tATTACK\t" << attack << endl
			<< "\t\t\t\tRANGE\t" << range << endl << "\t\t\t\tMANA\t" << mana << endl
			<< "\t\t\t\tLVL\t" << LVL << endl << "\t\t\t\tXP\t" << XP << endl;
	}
	else if (ID == 3)
	{
		cout << "\t\t\t\tMAGE" << endl << "\t\t\t\tHP\t" << HP << endl << "\t\t\t\tSPEED\t" << speed << endl
			<< "\t\t\t\tREGEN\t" << regen << endl << "\t\t\t\tMANA\t" << mana << endl
			<< "\t\t\t\tLVL\t" << LVL << endl << "\t\t\t\tXP\t" << XP << endl;
	}
}

void HERO::LVL_UP(int xp)
{
	switch (LVL)
	{
	case 1:
		LVL_1(xp);
		break;
	case 2:
		LVL_2(xp);
		break;
	case 3:
		LVL_3(xp);
		break;
	case 4:
		LVL_4(xp);
		break;
	case 5:
		LVL_5(xp);
		break;
	case 6:
		LVL_6(xp);
		break;
	case 7:
		LVL_7(xp);
		break;
	case 8:
		LVL_8(xp);
		break;
	case 9:
		LVL_9(xp);
		break;
	case 10:
		LVL_10(xp);
		break;
	default:
		break;
	}
}
void HERO::LVL_1(int xp)
{
	XP += xp;
	if (XP >= 100)
	{
		int tmp = XP - 100;

		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_2(int xp)
{
	XP += xp;
	if (XP >= 150)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_3(int xp)
{
	XP += xp;
	if (XP >= 200)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_4(int xp)
{
	XP += xp;
	if (XP >= 250)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_5(int xp)
{
	XP += xp;
	if (XP >= 300)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_6(int xp)
{
	XP += xp;
	if (XP >= 350)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_7(int xp)
{
	XP += xp;
	if (XP >= 400)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_8(int xp)
{
	XP += xp;
	if (XP >= 450)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_9(int xp)
{
	XP += xp;
	if (XP >= 500)
	{
		int tmp = XP - 100;
		LVL++;
		HP += 10;
		speed += 10;
		mana += 10;
		XP = tmp;
		if (ID == 1)
		{
			attack += 10;
		}
		else if (ID == 2)
		{
			attack += 10;
			range += 5;
		}
		else if (ID == 3)
		{
			regen += 25;
		}
		LVL_UP(0);
	}
}
void HERO::LVL_10(int xp)
{
	XP += xp;
	if (XP >= 550)
	{
		XP = 0;
	}
}
/*
*	1 lvl		...100		
*	2 lvl		...200
*	3 lvl		...400
*	4 lvl		...800
*	5 lvl		...1600
*	6 lvl		...3200
*	7 lvl		...6400
*	8 lvl		...12800
*	9 lvl		...25600
*  10 lvl		...51200
*
*/