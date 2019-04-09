#include "HUNTING.h"



HUNTING::HUNTING(Interface * parent){
	in = parent;
	lvl_1 = true;
	lvl_2 = true;
	lvl_3 = true;
	lvl_4 = true;
	lvl_5 = true;
	lvl_6 = true;
	lvl_7 = true;
	lvl_8 = true;
	lvl_9 = true;
	lvl_10 = true;
	drop_counter = 0;
	lvl_bonus_5 = true;
	lvl_bonus_10 = true;
}

HUNTING::~HUNTING(){}

void HUNTING::begin(vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> & HORSEMAN_V, vector<ARCHER> & ARCHER_V,
					vector<BUILDER> &BUILDER_V, vector<HERO> & HERO_V, int & limit, int & max, int & hero_soldier, int & hero_archer, int & hero_mage, int r, int &obsidian)
{
	clear();
	/*creation();*/
	int N;
	menu(N);
	if (N != 0)
	{
		text.HUNTING(GOBLIN_V, GOBLIN_HORSEMAN_V, GOBLIN_ARCHER_V);

		if (menu_exit() == true)
		{
			PVP(SOLDIER_V, HORSEMAN_V, ARCHER_V, BUILDER_V, HERO_V, limit, max, hero_soldier, hero_archer, hero_mage, r, N, obsidian);
		}
	}
	
}

//void HUNTING::creation()
//{
//	int				max_hun = rand() %50;//////////////////////////////////////////////
//	int				goblin = 0;
//	int				goblin_horseman = 0;
//	int				goblin_archer = 0;
//	int				sum = 0;
//	do
//	{
//		sum = 0;
//		goblin = rand() % 115;
//		goblin_horseman = rand() % 115;
//		goblin_archer = rand() % 115;
//		sum = goblin + goblin_horseman * 2 + goblin_archer * 2;
//
//	} while (max_hun != sum);
//
//	for (int i = 0; i < goblin; i++) GOBLIN_V.push_back(GOBLIN());
//	for (int i = 0; i < goblin_horseman; i++) GOBLIN_HORSEMAN_V.push_back(GOBLIN_HORSEMAN());
//	for (int i = 0; i < goblin_archer; i++) GOBLIN_ARCHER_V.push_back(GOBLIN_ARCHER());
//	
//}

void HUNTING::creation(int goblin, int goblin_archer, int goblin_horseman)
{
	for (int i = 0; i < goblin; i++) GOBLIN_V.push_back(GOBLIN());	
	for (int i = 0; i < goblin_archer; i++) GOBLIN_ARCHER_V.push_back(GOBLIN_ARCHER());
	for (int i = 0; i < goblin_horseman; i++) GOBLIN_HORSEMAN_V.push_back(GOBLIN_HORSEMAN());
}

void HUNTING::clear()
{
	GOBLIN_V.resize(0);
	GOBLIN_HORSEMAN_V.resize(0);
	GOBLIN_ARCHER_V.resize(0);
}

void HUNTING::PVP(vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> & HORSEMAN_V, vector<ARCHER> & ARCHER_V,
				  vector<BUILDER> &BUILDER_V, vector<HERO> & HERO_V, int & limit, int & max, int & hero_soldier, int & hero_archer, int & hero_mage, int r, int N, int &obsidian)
{
	system("cls");
	text.colors(10);
	/*---------------------------------------------------------------------------------------------------------------------------------------*/
	int		sum_V_HP =			0,
			sum_V_attack =		0, 
			sum_V_speed =		0,
			sum_V_range =		0,
			sum_V_regen =		0;

	for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
	{
		sum_V_HP += SOLDIER_V[i].HP;
		sum_V_speed += SOLDIER_V[i].speed;
		sum_V_attack += SOLDIER_V[i].attack;
	}
	for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
	{
		sum_V_HP += HORSEMAN_V[i].HP;
		sum_V_speed += HORSEMAN_V[i].speed;
		sum_V_attack += HORSEMAN_V[i].attack;
	}
	for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
	{
		sum_V_HP += ARCHER_V[i].HP;
		sum_V_speed += ARCHER_V[i].speed;
		sum_V_attack += ARCHER_V[i].attack;
		sum_V_range += ARCHER_V[i].range;
	}
	for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
	{
		sum_V_HP += BUILDER_V[i].HP;
	}
	for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
	{
		sum_V_HP += HERO_V[i].HP;
		sum_V_speed += HERO_V[i].speed;
		sum_V_attack += HERO_V[i].attack;
		if (HERO_V[i].ID == 2)
		{
			sum_V_range += HERO_V[i].range;
		}
		else if (HERO_V[i].ID == 3)
		{
			sum_V_regen += HERO_V[i].regen;
		}
	}
	/*---------------------------------------------------------------------------------------------------------------------------------------*/

	int		sum_PVP_HP =		0,
			sum_PVP_attack =	0, 
			sum_PVP_speed =		0, 
			sum_PVP_range =		0,
			sum_PVP_XP =		0;
	for (unsigned int i = 0; i < (unsigned)GOBLIN_V.size(); i++)
	{
		sum_PVP_HP += GOBLIN_V[i].HP;
		sum_PVP_speed += GOBLIN_V[i].speed;
		sum_PVP_attack += GOBLIN_V[i].attack;
		sum_PVP_XP += GOBLIN_V[i].XP;
	}
	for (unsigned int i = 0; i < (unsigned)GOBLIN_HORSEMAN_V.size(); i++)
	{
		sum_PVP_HP += GOBLIN_HORSEMAN_V[i].HP;
		sum_PVP_speed += GOBLIN_HORSEMAN_V[i].speed;
		sum_PVP_attack += GOBLIN_HORSEMAN_V[i].attack;
		sum_PVP_XP += GOBLIN_HORSEMAN_V[i].XP;
	}
	for (unsigned int i = 0; i < (unsigned)GOBLIN_ARCHER_V.size(); i++)
	{
		sum_PVP_HP += GOBLIN_ARCHER_V[i].HP;
		sum_PVP_speed += GOBLIN_ARCHER_V[i].speed;
		sum_PVP_attack += GOBLIN_ARCHER_V[i].attack;
		sum_PVP_range += GOBLIN_ARCHER_V[i].range;
		sum_PVP_XP += GOBLIN_ARCHER_V[i].XP;
	}

	/*---------------------------------------------ДОПОЛНИТЕЛЬНО-----------------------------------------------------------------------------*/
	int		speed_V_add =		0, 
			speed_PVP_add =		0;
	if		(sum_V_speed > sum_PVP_speed)			speed_V_add += 15;
	else if (sum_PVP_speed > sum_V_speed)			speed_PVP_add += 15;

	int		range_V_add =		0,
			range_PVP_add =		0;
	if		(sum_V_range > sum_PVP_range)			range_V_add += 15;
	else if (sum_PVP_range > sum_V_range)			range_PVP_add += 15;
	/*---------------------------------------------------------------------------------------------------------------------------------------*/
	do
	{
		/*-------------------------------Противник------------------------------------*/
				sum_PVP_HP =		0,
				sum_PVP_attack =	0;
		int		sum_PVP_unit =		0;
		for (unsigned int i = 0; i < (unsigned)GOBLIN_V.size(); i++)
		{
			sum_PVP_HP += GOBLIN_V[i].HP;
			sum_PVP_attack += GOBLIN_V[i].attack;
			sum_PVP_unit++;
		}
		for (unsigned int i = 0; i < (unsigned)GOBLIN_HORSEMAN_V.size(); i++)
		{
			sum_PVP_HP += GOBLIN_HORSEMAN_V[i].HP;
			sum_PVP_attack += GOBLIN_HORSEMAN_V[i].attack;
			sum_PVP_unit++;
		}
		for (unsigned int i = 0; i < (unsigned)GOBLIN_ARCHER_V.size(); i++)
		{
			sum_PVP_HP += GOBLIN_ARCHER_V[i].HP;
			sum_PVP_attack += GOBLIN_ARCHER_V[i].attack;
			sum_PVP_unit++;
		}
		/*-------------------------------Игрок------------------------------------*/
				sum_V_HP =			0, 
				sum_V_attack =		0;
				sum_V_regen =		0;
		int		sum_V_unit =		0;
		for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
		{
			sum_V_HP += SOLDIER_V[i].HP;
			sum_V_attack += SOLDIER_V[i].attack;
			sum_V_unit++;
		}
		for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
		{
			sum_V_HP += HORSEMAN_V[i].HP;
			sum_V_attack += HORSEMAN_V[i].attack;
			sum_V_unit++;
		}
		for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
		{
			sum_V_HP += ARCHER_V[i].HP;
			sum_V_attack += ARCHER_V[i].attack;
			sum_V_unit++;
		}
		for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
		{
			sum_V_HP += BUILDER_V[i].HP;
			sum_V_unit++;
		}
		for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
		{
			sum_V_HP += HERO_V[i].HP;
			sum_V_attack += HERO_V[i].attack;
			sum_V_unit++;
			if (HERO_V[i].ID == 3) sum_V_regen += HERO_V[i].regen;
			
		}

		if		(sum_V_HP <= 0)				break;
		else if (sum_PVP_HP <= 0)			break;
		/*-------------------------------Дополнительная атака------------------------------------*/
		int		tmp_V =			0,
				tmp_PVP =		0;
		for (unsigned int k = 0; k < (unsigned)HERO_V.size(); k++)
			if ((rand() % 99 + 1) <= 5 && HERO_V[k].mana >= 10 && HERO_V[k].ID != 3)
			{
				tmp_V += 10;
				HERO_V[k].mana -= 10;
			}
		

		/*---------------------------------------------------------------------------------------*/
		if (sum_PVP_unit == 0 || sum_V_unit == 0) break;
		/*--------------------------------------*/
		int			numb_PVP =		0,
					mid_PVP_S =		0,
					mid_PVP_A =		0,
					mid_PVP_H =		0,
					mid_PVP =		0;

		if (GOBLIN_V.size() != 0)			++numb_PVP;
		if (GOBLIN_ARCHER_V.size() != 0)	++numb_PVP;
		if (GOBLIN_HORSEMAN_V.size() != 0)	++numb_PVP;

		mid_PVP = (sum_V_attack + tmp_V) / numb_PVP;

		if (GOBLIN_HORSEMAN_V.size() != 0)
		{
			mid_PVP_H = mid_PVP;
		}

		if (GOBLIN_V.size() != 0)
		{
			mid_PVP_S = mid_PVP;
			if (mid_PVP_H != 0)
			{
				mid_PVP_S += mid_PVP_H / 2;
				mid_PVP_H /= 2;
			}
			for (unsigned int i = 0; i < (unsigned)GOBLIN_V.size(); ++i)
			{
				int tmp = GOBLIN_V[i].HP - mid_PVP_S;
				if (tmp <= 0)
				{
					mid_PVP_S -= GOBLIN_V[i].HP;
					GOBLIN_V.erase(GOBLIN_V.begin() + i);
					--i;
				}
				else
				{
					GOBLIN_V[i].HP -= mid_PVP_S;
					mid_PVP_S = 0;
					break;
				}
			}
		}

		if (GOBLIN_HORSEMAN_V.size() != 0)
		{
			mid_PVP_H = mid_PVP;
			if (mid_PVP_S != 0)
			{
				mid_PVP_H += mid_PVP_S;
				mid_PVP_S = 0;
			}
			for (unsigned int i = 0; i < (unsigned)GOBLIN_HORSEMAN_V.size(); i++)
			{
				int tmp = GOBLIN_HORSEMAN_V[i].HP - mid_PVP_H;
				if (tmp <= 0)
				{
					mid_PVP_H -= GOBLIN_HORSEMAN_V[i].HP;
					GOBLIN_HORSEMAN_V.erase(GOBLIN_HORSEMAN_V.begin() + i);
					--i;
				}
				else
				{
					GOBLIN_HORSEMAN_V[i].HP -= mid_PVP_H;
					mid_PVP_H = 0;
					break;
				}
			}
		}

		if (GOBLIN_ARCHER_V.size() != 0)
		{
			mid_PVP_A = mid_PVP;
			if (mid_PVP_H != 0)
			{
				mid_PVP_A += mid_PVP_H;
				mid_PVP_H = 0;
			}
			if (mid_PVP_S != 0)
			{
				mid_PVP_A += mid_PVP_S;
				mid_PVP_S = 0;
			}
			for (unsigned int i = 0; i < (unsigned)GOBLIN_ARCHER_V.size(); i++)
			{

				int tmp = GOBLIN_ARCHER_V[i].HP - mid_PVP_A;
				if (tmp <= 0)
				{
					mid_PVP_A -= GOBLIN_ARCHER_V[i].HP;
					GOBLIN_ARCHER_V.erase(GOBLIN_ARCHER_V.begin() + i);
					--i;
				}
				else
				{
					GOBLIN_ARCHER_V[i].HP -= mid_PVP_A;
					mid_PVP_A = 0;
					break;
				}
			}
		}

		int			numb_V =		0,
					mid_V_S =		0,
					mid_V_A =		0,
					mid_V_H =		0,
					mid_V_B =		0,
					mid_V_H_H =		0,
					mid_V =			0;

		if (SOLDIER_V.size() != 0)		++numb_V;
		if (ARCHER_V.size() != 0)		++numb_V;
		if (HORSEMAN_V.size() != 0)		++numb_V;
		if (BUILDER_V.size() != 0)		++numb_V;
		if (HERO_V.size() != 0)			++numb_V;

		mid_V = (sum_PVP_attack + tmp_PVP) / numb_V;

		if (HERO_V.size() != 0)
		{
			mid_V_H_H = mid_V;
		}
		if (SOLDIER_V.size() != 0)
		{
			mid_V_S = mid_V;
			if (mid_V_H_H != 0)
			{
				mid_V_S += mid_V_H_H / 2;
				mid_V_H_H /= 2;
			}
			for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); ++i)
			{
				int tmp = SOLDIER_V[i].HP - mid_V_S;
				if (tmp <= 0)
				{
					mid_V_S -= SOLDIER_V[i].HP;
					SOLDIER_V.erase(SOLDIER_V.begin() + i);
					limit -= 1;
					--i;
				}
				else
				{
					SOLDIER_V[i].HP -= mid_V_S;
					mid_V_S = 0;
					break;
				}
			}
		}
		if (HORSEMAN_V.size() != 0)
		{
			mid_V_H = mid_V;
			if (mid_V_S != 0)
			{
				mid_V_H += mid_V_S;
				mid_V_S = 0;
			}
			for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
			{
				int tmp = HORSEMAN_V[i].HP - mid_V_H;
				if (tmp <= 0)
				{
					mid_V_H -= HORSEMAN_V[i].HP;
					HORSEMAN_V.erase(HORSEMAN_V.begin() + i);
					limit -= 3;
					--i;
				}
				else
				{
					HORSEMAN_V[i].HP -= mid_V_H;
					mid_V_H = 0;
					break;
				}
			}
		}
		if (HERO_V.size() != 0)
		{
			//mid_V_H_H = mid_PVP;
			if (mid_V_H != 0)
			{
				mid_V_H_H += mid_V_H;
				mid_V_H = 0;
			}
			if (mid_V_S != 0)
			{
				mid_V_H_H += mid_V_S;
				mid_V_S = 0;
			}
			for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
			{
				int tmp = HERO_V[i].HP - mid_V_H_H;
				if (tmp <= 0)
				{
					mid_V_H_H -= HERO_V[i].HP;
					if (HERO_V[i].ID == 1) in->basis->HERO_SOLDIER--;
					if (HERO_V[i].ID == 2) in->basis->HERO_ARCHER--;
					if (HERO_V[i].ID == 3) in->basis->HERO_MAGE--;
					HERO_V.erase(HERO_V.begin() + i);
					limit -= 5;
					--i;
				}
				else
				{
					HERO_V[i].HP -= mid_V_H_H;
					mid_V_H_H = 0;
					break;
				}
			}
		}
		if (ARCHER_V.size() != 0)
		{
			mid_V_A = mid_V;
			if (mid_V_H_H != 0)
			{
				mid_V_A += mid_V_H_H;
				mid_V_H_H = 0;
			}
			if (mid_V_S != 0)
			{
				mid_V_A += mid_V_S;
				mid_V_S = 0;
			}
			if (mid_V_H != 0)
			{
				mid_V_A += mid_V_H;
				mid_V_H = 0;
			}
			for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
			{
				int tmp = ARCHER_V[i].HP - mid_V_A;
				if (tmp <= 0)
				{
					mid_V_A -= ARCHER_V[i].HP;
					ARCHER_V.erase(ARCHER_V.begin() + i);
					limit -= 2;
					--i;
				}
				else
				{
					ARCHER_V[i].HP -= mid_V_A;
					mid_V_A = 0;
					break;
				}
			}
		}
		if (BUILDER_V.size() != 0)
		{
			mid_V_B = mid_V;
			if (mid_V_S != 0)
			{
				mid_V_B += mid_V_S;
				mid_V_S = 0;
			}
			if (mid_V_H != 0)
			{
				mid_V_B += mid_V_H;
				mid_V_H = 0;
			}
			if (mid_V_H_H != 0)
			{
				mid_V_B += mid_V_H_H;
				mid_V_H_H = 0;
			}
			if (mid_V_A != 0)
			{
				mid_V_B += mid_V_A;
				mid_V_A = 0;
			}
			for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
			{
				int tmp = BUILDER_V[i].HP - mid_V_B;
				if (tmp <= 0)
				{
					mid_V_B -= BUILDER_V[i].HP;
					BUILDER_V.erase(BUILDER_V.begin() + i);
					limit -= 1;
					--i;
				}
				else
				{
					BUILDER_V[i].HP -= mid_V_B;
					mid_V_B = 0;
					break;
				}
			}
		}
		/*--------------------------------------*/	
	} while (sum_PVP_HP > 0 || sum_V_HP > 0);

	if (sum_V_HP > sum_PVP_HP)
	{
		if (HERO_V.size() > 0)
		{
			int PVP_XP = sum_PVP_XP / HERO_V.size();
			for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++) HERO_V[i].LVL_UP(PVP_XP);
		}
		if (in->basis->lim_b->shrine == 0)	in->basis->shrine.regen(SOLDIER_V, ARCHER_V, HORSEMAN_V, HERO_V, BUILDER_V);
		obsidian_drop(obsidian, N);
		text.VICTORY();
		_getch();
	}
	else if (sum_PVP_HP > sum_V_HP)
	{
		text.DEFEAT();
		_getch();
		system("cls");

		/*limit = 0;
		max = 15;
		SOLDIER_V.resize(0);
		HORSEMAN_V.resize(0);
		ARCHER_V.resize(0);
		HERO_V.resize(0);
		BUILDER_V.resize(0);*/
		in->basis->Clear(r);
		in->basis->lim_b->clear();
		lvl_1 = true;
		lvl_2 = true;
		lvl_3 = true;
		lvl_4 = true;
		lvl_5 = true;
		lvl_6 = true;
		lvl_7 = true;
		lvl_8 = true;
		lvl_9 = true;
		lvl_10 = true;
		drop_counter = 0;
		_getch();
	}
}

void HUNTING::menu(int & N)
{
	text.hunting_menu(lvl_1, lvl_2, lvl_3, lvl_4, lvl_5, lvl_6, lvl_7, lvl_8, lvl_9, lvl_10);
	string n = "";
	
	in->cin_(n, N, 0, 10);
	switch (N)
	{
	case 0: 
		break;
	case 1:
		creation(2, 1, 0);
		break;
	case 2:
		creation(4, 2, 1);
		break;
	case 3:
		creation(8, 4, 2);
		break;
	case 4:
		creation(10, 8, 4);
		break;
	case 5:
		creation(14, 10, 8);
		break;
	case 6:
		creation(16, 14, 10);
		break;
	case 7:
		creation(20, 16, 14);
		break;
	case 8:
		creation(22, 20, 16);
		break;
	case 9:
		creation(26, 22, 20);
		break;
	default:
		creation(30, 26, 22);
		break;
	}

}

bool HUNTING::menu_exit()
{
	string n = "";
	int N;
	in->cin_(n, N, 1, 2);
	if (N == 1) return true;
	else return false;
}

void HUNTING::obsidian_drop(int & obsidian, int &N)
{
	if (N == 1 && lvl_1 == true)
	{
		obsidian++;
		lvl_1 = false;
		drop_counter++;
	}
	else if (N == 2 && lvl_2 == true)
	{
		obsidian++;
		lvl_2 = false;
		drop_counter++;
	}
	else if (N == 3 && lvl_3 == true)
	{
		obsidian++;
		lvl_3 = false;
		drop_counter++;
	}
	else if (N == 4 && lvl_4 == true)
	{
		obsidian++;
		lvl_4 = false;
		drop_counter++;
	}
	else if (N == 5 && lvl_5 == true)
	{
		obsidian+= 2;
		lvl_5 = false;
		drop_counter++;
	}
	else if (N == 6 && lvl_6 == true)
	{
		obsidian++;
		lvl_6 = false;
		drop_counter++;
	}
	else if (N == 7 && lvl_7 == true)
	{
		obsidian++;
		lvl_7 = false;
		drop_counter++;
	}
	else if (N == 8 && lvl_8 == true)
	{
		obsidian++;
		lvl_8 = false;
		drop_counter++;
	}
	else if (N == 9 && lvl_9 == true)
	{
		obsidian++;
		lvl_9 = false;
		drop_counter++;
	}
	else if (N == 10 && lvl_10 == true)
	{
		obsidian+= 2;
		lvl_10 = false;
		drop_counter++;
	}

	if (drop_counter == 5 && lvl_bonus_5 == true)
	{
		system("cls");
		text.colors(11);
		cout << "\tПоздравляю, вы прошли 5 уровней! 1 обсидиан в подарок)" << endl;
		obsidian++;
		lvl_bonus_5 = false;
	}
	else if (drop_counter == 10 && lvl_bonus_10 == true)
	{
		system("cls");
		text.colors(11);
		cout << "\tПоздравляю, вы прошли 10 уровней! 1 обсидиан в подарок)" << endl;
		obsidian++;
		lvl_bonus_10 = false;
	}
	
}

void HUNTING::clear_drop()
{
	lvl_1 = true;
	lvl_2 = true;
	lvl_3 = true;
	lvl_4 = true;
	lvl_5 = true;
	lvl_6 = true;
	lvl_7 = true;
	lvl_8 = true;
	lvl_9 = true;
	lvl_10 = true;
	drop_counter = 0;
	lvl_bonus_5 = true;
	lvl_bonus_10 = true;
}
