#include "Limit_Basis.h"



Limit_Basis::Limit_Basis( BASIS * par)
{
	basis = par;
	lim_house			= 6;
	lim_farm			= 4;
	lim_casern			= 2;
	forge				= 1;
	hall_of_heroes		= 1;
	shrine				= 1;
	save_forge_HP		= 0;
	save_forge_ATTACK	= 0;
	save_forge_SPEED	= 0;
	save_forge_RANGE	= 0;
}


Limit_Basis::~Limit_Basis()
{
}

void Limit_Basis::begin(int limit, int &max, vector<BUILDER> &BUILDER_V, int r, int &obsidian)
{
	text.limit_exten(limit, max, lim_house, lim_farm, lim_casern, forge, hall_of_heroes, shrine, r, obsidian);
	string n = "";
	int N;
	basis->in->cin_(n, N, 0, 6);
	system("cls");
	if (N == 0){}
	else if (N == 1)
	{
		if (lim_house == 0)
		{
			text.Error_limit_exten();
		}
		else if(obsidian == 0)
		{
			text.Error_obsidian();
		}
		else
		{
			text.volume();
			string v = "";
			int V;
			basis->in->cin_(v, V, 1, lim_house);
			if (V > obsidian)
			{
				do
				{
					text.Error_obsidian();
					text.volume();
					basis->in->cin_(v, V, 1, lim_house);
				} while (V > obsidian);	
			}
			if ((unsigned)V > (unsigned)BUILDER_V.size())
			{
				do
				{
					text.colors(4);
					cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\tНе хватает строителей. Введите меньше." << endl;
					_getch();
					text.volume();
					basis->in->cin_(v, V, 1, lim_house);
					if (V > obsidian)
					{
						do
						{
							text.Error_obsidian();
							text.volume();
							basis->in->cin_(v, V, 1, lim_house);
						} while (V > obsidian);
					}
				} while ((unsigned)V > (unsigned)BUILDER_V.size());
			}
			for (unsigned int i = 0; i < (unsigned)V; i++)
			{
				HOUSE_V.push_back(HOUSE());
				lim_house--;
				max += HOUSE_V[HOUSE_V.size() - 1].plus;
				obsidian--;
			}
		}
	}
	else if(N == 2)
	{
		if (lim_farm == 0)
		{
			text.Error_limit_exten();
		}
		else if (obsidian == 0)
		{
			text.Error_obsidian();
		}
		else
		{
			text.volume();
			string v = "";
			int V;
			basis->in->cin_(v, V, 1, lim_farm);
			if (V > obsidian)
			{
				do
				{
					text.Error_obsidian();
					text.volume();
					basis->in->cin_(v, V, 1, lim_farm);
				} while (V > obsidian);
			}
			if ((unsigned)V > (unsigned)BUILDER_V.size())
			{
				do
				{
					text.colors(4);
					cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\tНе хватает строителей. Введите меньше." << endl;
					_getch();
					text.volume();
					basis->in->cin_(v, V, 1, lim_farm);
					if (V > obsidian)
					{
						do
						{
							text.Error_obsidian();
							text.volume();
							basis->in->cin_(v, V, 1, lim_farm);
						} while (V > obsidian);
					}
				} while ((unsigned)V > (unsigned)BUILDER_V.size());
			}
			for (unsigned int i = 0; i < (unsigned)V; i++)
			{
				FARM_V.push_back(FARM());
				lim_farm--;
				max += FARM_V[FARM_V.size() - 1].plus;
				obsidian--;
			}
		}
	}
	else if(N == 3)
	{
		if (lim_casern == 0)
		{
			text.Error_limit_exten();
		}
		else if (obsidian == 0)
		{
			text.Error_obsidian();
		}
		else
		{
			text.volume();
			string v = "";
			int V;
			basis->in->cin_(v, V, 1, lim_casern);
			if (V > obsidian)
			{
				do
				{
					text.Error_obsidian();
					text.volume();
					basis->in->cin_(v, V, 1, lim_casern);
				} while (V > obsidian);
			}
			if ((unsigned)V > (unsigned)BUILDER_V.size())
			{
				do
				{
					text.colors(4);
					cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\tНе хватает строителей. Введите меньше." << endl;
					_getch();
					text.volume();
					basis->in->cin_(v, V, 1, lim_casern);
					if (V > obsidian)
					{
						do
						{
							text.Error_obsidian();
							text.volume();
							basis->in->cin_(v, V, 1, lim_casern);
						} while (V > obsidian);
					}
				} while ((unsigned)V > (unsigned)BUILDER_V.size());
			}
			for (unsigned int i = 0; i < (unsigned)V; i++)
			{
				CASERN_V.push_back(CASERN());
				lim_casern--;
				max += CASERN_V[CASERN_V.size() - 1].plus;
				obsidian--;
			}
		}
	}
	else if(N == 4)
	{
		if (forge == 0) text.Error_limit_exten();
		else if (obsidian == 0) text.Error_obsidian();
		else
		{
			FORGE_V.push_back(FORGE());
			forge--;
			obsidian--;
		}
	}
	else if(N == 5)
	{
		if (hall_of_heroes == 0) text.Error_limit_exten();
		else if (obsidian == 0) text.Error_obsidian();
		else
		{
			HALL_OF_HEROES_V.push_back(HALL_OF_HEROES());
			hall_of_heroes--;
			obsidian--;
		}
	}
	else if(N == 6)
	{
		if (shrine == 0) text.Error_limit_exten();
		else if (obsidian == 0) text.Error_obsidian();
		else
		{
			SHRINE_V.push_back(SHRINE());
			shrine--;
			obsidian--;
		}
	}
}

void Limit_Basis::clear()
{
	lim_house = 6;
	lim_farm = 4;
	lim_casern = 2;
	forge = 1;
	hall_of_heroes = 1;
	shrine = 1;
	save_forge_HP = 0;
	save_forge_ATTACK = 0;
	save_forge_SPEED = 0;
	save_forge_RANGE = 0;
	HOUSE_V.resize(0);
	FARM_V.resize(0);
	CASERN_V.resize(0);
	FORGE_V.resize(0);
	HALL_OF_HEROES_V.resize(0);
	SHRINE_V.resize(0);
}

/*----------------------------------------------------------------------Кузница------------------------------------------------------------------------------*/
void Limit_Basis::menu_0(int& limit, int& max,/* vector<HORSE> &HORSE_V, */vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
	vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__)
{
	text.forge(limit, max);
	
	string n = "";
	int N;
	basis->in->cin_(n, N, 0, 4);
	if (N == 1) HP(limit, max, SOLDIER_V, HORSEMAN_V, ARCHER_V, HERO_V, BUILDER_V, max__);
	
	else if (N == 2) ATTACK(limit, max, SOLDIER_V, HORSEMAN_V, ARCHER_V, HERO_V, BUILDER_V, max__);
	
	else if (N == 3) SPEED(limit, max,  SOLDIER_V, HORSEMAN_V, ARCHER_V, HERO_V, BUILDER_V, max__);
	
	else if (N == 4)RANGE(limit, max, ARCHER_V, max__);

	
	_getch();
	_getch();
}

void Limit_Basis::HP(int &limit, int &max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
	vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__)
{
	if (limit == max || (max - limit) < 8) cout << "Ваш лимит не позволяет выполнить операцию. Должно быть свободно 8 мест." << endl;
	
	else
	{
		max -= 8;
		max__ -= 8;
		
		for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
			SOLDIER_V[i].HP += 20;
		for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
			HORSEMAN_V[i].HP += 20;
		for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
			ARCHER_V[i].HP += 20;
		for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
			HERO_V[i].HP += 20;
		for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
			BUILDER_V[i].HP += 20;

		save_forge_HP+= 20;
	}
}

void Limit_Basis::ATTACK(int &limit, int& max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
	vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__)
{
	if (limit == max || (max - limit) < 7) cout << "Ваш лимит не позволяет выполнить операцию. Должно быть свободно 7 мест." << endl;
	
	else
	{
		max -= 7;
		max__ -= 7;
		for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
			SOLDIER_V[i].attack += 15;
		for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
			HORSEMAN_V[i].attack += 15;
		for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
			ARCHER_V[i].attack += 15;
		for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
			HERO_V[i].attack += 15;

		save_forge_ATTACK += 15;
	}

}

void Limit_Basis::SPEED(int& limit, int &max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
	vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__)
{
	if (limit == max || (max - limit) < 6) cout << "Ваш лимит не позволяет выполнить операцию. Должно быть свободно 6 мест." << endl;
	
	else
	{
		max -= 6;
		max__ -= 6;
		for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
			SOLDIER_V[i].speed += 20;
		for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
			HORSEMAN_V[i].speed += 20;
		for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
			ARCHER_V[i].speed += 20;
		for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
			HERO_V[i].speed += 20;

		save_forge_SPEED += 20;
	}
}

void Limit_Basis::RANGE(int &limit, int &max, vector<ARCHER> &ARCHER_V, int &max__)
{
	if (limit == max || (max - limit) < 6) cout << "Ваш лимит не позволяет выполнить операцию. Должно быть свободно 6 мест." << endl;
	else
	{
		max -= 6;
		max__ -= 6;
		for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
			ARCHER_V[i].range += 20;

		save_forge_RANGE += 20;
	}
}

void Limit_Basis::forge_save_HP(vector<SOLDIER>& SOLDIER_V)
{
	SOLDIER_V[SOLDIER_V.size() - 1].HP += save_forge_HP;
}
void Limit_Basis::forge_save_HP(vector<HORSEMAN>& HORSEMAN_V)
{
	HORSEMAN_V[HORSEMAN_V.size() - 1].HP += save_forge_HP;
}
void Limit_Basis::forge_save_HP(vector<ARCHER>& ARCHER_V)
{
	ARCHER_V[ARCHER_V.size() - 1].HP += save_forge_HP;
}
void Limit_Basis::forge_save_HP(vector<HERO>& HERO_V)
{
	HERO_V[HERO_V.size() - 1].HP += save_forge_HP;
}
void Limit_Basis::forge_save_HP(vector<BUILDER>& BUILDER_V)
{
	BUILDER_V[BUILDER_V.size() - 1].HP += save_forge_HP;
}

void Limit_Basis::forge_save_ATTACK(vector<SOLDIER> &SOLDIER_V)
{
	SOLDIER_V[SOLDIER_V.size() - 1].attack += save_forge_ATTACK;
}
void Limit_Basis::forge_save_ATTACK(vector<HORSEMAN> &HORSEMAN_V)
{
	HORSEMAN_V[HORSEMAN_V.size() - 1].attack += save_forge_ATTACK;
}
void Limit_Basis::forge_save_ATTACK(vector<ARCHER> &ARCHER_V)
{
	ARCHER_V[ARCHER_V.size() - 1].attack += save_forge_ATTACK;
}
void Limit_Basis::forge_save_ATTACK(vector<HERO> &HERO_V)
{
	HERO_V[HERO_V.size() - 1].attack += save_forge_ATTACK;
}

void Limit_Basis::forge_save_SPEED(vector<SOLDIER> &SOLDIER_V)
{
	SOLDIER_V[SOLDIER_V.size() - 1].speed += save_forge_SPEED;
}
void Limit_Basis::forge_save_SPEED(vector<HORSEMAN> &HORSEMAN_V)
{
	HORSEMAN_V[HORSEMAN_V.size() - 1].speed += save_forge_SPEED;
}
void Limit_Basis::forge_save_SPEED(vector<ARCHER> &ARCHER_V)
{
	ARCHER_V[ARCHER_V.size() - 1].speed += save_forge_SPEED;
}
void Limit_Basis::forge_save_SPEED(vector<HERO> &HERO_V)
{
	HERO_V[HERO_V.size() - 1].speed += save_forge_SPEED;
}

void Limit_Basis::forge_save_RANGE(vector<ARCHER> &ARCHER_V)
{
	ARCHER_V[ARCHER_V.size() - 1].range += save_forge_RANGE;
}
void Limit_Basis::forge_save_RANGE(vector<HERO> &HERO_V)
{
	HERO_V[HERO_V.size() - 1].range += save_forge_RANGE;
}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

void Limit_Basis::menu_1(int & limit, int & max, vector<HERO> & HERO_V, int r)
{
	text.hall_of_heroes(limit, max, HERO_V, r);
}


