
#include "BASIS.h"



BASIS::BASIS(Interface * parent)
{
	max = 15;
	max__ = 115;
	limit = 0;
	obsidian = 1;
	in = parent;
	lim_b = new Limit_Basis(this);
	HERO_SOLDIER =	0;
	HERO_ARCHER =	0;
	HERO_MAGE =		0;
}
BASIS::~BASIS(){}


/*НАЧАЛО ПРОГРАММЫ*/
void BASIS::begin(int r)
{
	NPC_V.push_back(NPC());
	do
	{
		text.output_unit(limit, NPC_V, SOLDIER_V, HORSEMAN_V, ARCHER_V, HERO_V, max, BUILDER_V, r, obsidian);
		bool ok = true;
		in->menu_2(max__, ok, r);

		if (ok == true)
		{
			text.character(limit, NPC_V,  SOLDIER_V, HORSEMAN_V, ARCHER_V, HERO_V, max, BUILDER_V, r, obsidian);
			//if (limit == max__) PVP();
		}
	} while (true);
}

/*ОБНУЛЕНИЕ ЮНИТОВ*/
void BASIS::Clear(int r)
{
	limit = 0;
	max = 15;
	max__ = 115;
	obsidian = 1;
	//NPC_V.resize(0);
	SOLDIER_V.resize(0);
	HORSEMAN_V.resize(0);
	ARCHER_V.resize(0);
	HERO_V.resize(0);
	BUILDER_V.resize(0);
	lim_b->clear();
	HERO_SOLDIER = 0;
	HERO_ARCHER = 0;
	HERO_MAGE = 0;

	//begin(r);												/******если что убрла чтоб почекать*******/
}

/*------------------------------------------------------------------Продажа юнитов-----------------------------------------------------------------------*/

void BASIS::sack(int r)
{
	text.sack(limit, max, lim_b->hall_of_heroes, r, obsidian);
	string number = "";
	int N;
	int tmp = 3;
	if (lim_b->hall_of_heroes == 0)
		tmp++;
	in->cin_(number, N, 0, tmp);
	if (N == 1)
		sack_SOLDIER();
	else if (N == 3)
		sack_HORSEMAN();
	else if (N == 2)
		sack_ARCHER();
	else if (N == 4)
		sack_HERO();
	else if (N == 0){}
}

void BASIS::sack_SOLDIER()
{
	system("cls");
	if (SOLDIER_V.size() == 0)
	{
		text.colors(4);
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\tУ вас нет солдатов. Операция невозможна." << endl;
		_getch();
		_getch();
	}
	else
	{
		text.volume();
		string number = "";
		cin >> number;
		int lim = in->check_3(number, SOLDIER_V.size());
		for (int i = 0; i < lim; i++)
		{
			//SOLDIER_V.pop_back();
			SOLDIER_V.erase(SOLDIER_V.begin());
		
			limit-=1;
		}
	}
}

void BASIS::sack_HORSEMAN()
{
	system("cls");
	if (HORSEMAN_V.size() == 0)
	{
		text.colors(4);
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\tУ вас нет всадников. Операция невозможна." << endl;
		_getch();
		_getch();
	}
	else {
		text.volume();
		string number = "";
		cin >> number;
		int lim = in->check_3(number, HORSEMAN_V.size());
		for (int i = 0; i < lim; i++)
		{
			//HORSEMAN_V.pop_back();
			HORSEMAN_V.erase(HORSEMAN_V.begin());
			limit -= 3;
		}
	}
}

void BASIS::sack_ARCHER()
{
	system("cls");
	if (ARCHER_V.size() == 0)
	{
		text.colors(4);
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\tУ вас нет лучников. Операция невозможна." << endl;
		_getch();
		_getch();
	}
	else {
		text.volume();
		string number = "";
		cin >> number;
		int lim = in->check_3(number, ARCHER_V.size());
		for (int i = 0; i < lim; i++)
		{
			//ARCHER_V.pop_back();
			ARCHER_V.erase(ARCHER_V.begin());
			limit-=2;
		}
	}
}

void BASIS::sack_HERO()
{
	system("cls");
	if (HERO_V.size() == 0)
	{
		text.colors(4);
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\tУ вас нет героев. Операция невозможна." << endl;
		_getch();
		_getch();
	}
	else
	{
		text.volume();
		string number = "";
		cin >> number;
		int lim = in->check_3(number, HERO_V.size());
		for (int i = 0; i < lim; i++)
		{
			text.colors(14);
			cout << endl << "Введите имя Героя - ";
			string NAME = "";
			text.colors(10);
			cin >> NAME;
			bool ok = false;
			int iD;
			for (unsigned int i = 0; i < (unsigned) HERO_V.size(); i++)
			{
				if (NAME == HERO_V[i].name)
				{
					ok = true;
					iD = i;
					break;
				}
			}
			if (ok == true)
			{
				if (HERO_V[iD].ID == 1)
				{
					HERO_SOLDIER--;
				}
				else if (HERO_V[iD].ID == 2)
				{
					HERO_ARCHER--;
				}
				else if (HERO_V[iD].ID == 3)
				{
					HERO_MAGE--;
				}
				HERO_V.erase(HERO_V.begin() + iD);
				cout << endl;
				limit -= 5;
			}
			else
			{
				text.colors(4);
				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\tНет такого героя." << endl;
				_getch();
				_getch();
			}
		}
	}
}


/*------------------------------------------------------------------Покупка юнитов-----------------------------------------------------------------------*/

void BASIS::hire(int r)
{
	if (limit == max)
	{
		system("cls");
		text.colors(4);
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t\tЛимит достигнуть. Операция невозможна." << endl;
		_getch();
		_getch();
	}
	else
	{
		text.hire(limit, max, lim_b->hall_of_heroes, r, lim_b->save_forge_HP, lim_b->save_forge_ATTACK, lim_b->save_forge_SPEED, lim_b->save_forge_RANGE, obsidian);
		string number = "";
		int N;
		int R = 4;
		if (lim_b->hall_of_heroes == 0)
			R++;
		in->cin_(number, N, 0, R);
		if (N == 1)
			hire_SOLDIER(r);
		else if (N == 3)
			hire_HORSEMAN(r);
		else if (N == 2)
			hire_ARCHER(r);
		else if (N == 4)
			hire_BUILDER();
		else if (N == 5)
			hire_HERO(r);
		else if (N == 0){}
	}
}

void BASIS::hire_SOLDIER(int r)
{
	if (max - limit < 1)
	{
		system("cls");
		text.Error_limit();
	}
	else
	{
		text.volume();
		string number = "";
		cin >> number;
		if (in->check_3(number, max/1) * 1  + limit <= max)
		{
			for (int i = 0; i < in->check_3(number, max/1); i++)
			{
				SOLDIER_V.push_back(SOLDIER(r));
				limit+=1;
				lim_b->forge_save_HP(SOLDIER_V);
				lim_b->forge_save_ATTACK(SOLDIER_V);
				lim_b->forge_save_SPEED(SOLDIER_V);
			}
		}
		else
		{
			in->check_4(number, limit, max, max / 1, 1);
			for (int i = 0; i < in->check_3(number, max/1); i++)
			{
				SOLDIER_V.push_back(SOLDIER(r));
				limit+=1;
				lim_b->forge_save_HP(SOLDIER_V);
				lim_b->forge_save_ATTACK(SOLDIER_V);
				lim_b->forge_save_SPEED(SOLDIER_V);
			}
		}
	}
}

void BASIS::hire_HORSEMAN(int r)
{
	if (max - limit < 3)
	{
		system("cls");
		text.Error_limit();
	}
	else
	{
		text.volume();
		string number = "";
		cin >> number;
		if (in->check_3(number, max/3) * 3 + limit <= max)
		{
			for (int i = 0; i < in->check_3(number, max/3); i++)
			{
				HORSEMAN_V.push_back(HORSEMAN(r));
				limit += 3;
				lim_b->forge_save_HP(HORSEMAN_V);
				lim_b->forge_save_ATTACK(HORSEMAN_V);
				lim_b->forge_save_SPEED(HORSEMAN_V);
			}
		}
		else
		{
			in->check_4(number, limit, max, max / 3, 3);
			for (int i = 0; i < in->check_3(number, max/3); i++)
			{
				HORSEMAN_V.push_back(HORSEMAN(r));
				limit += 3;
				lim_b->forge_save_HP(HORSEMAN_V);
				lim_b->forge_save_ATTACK(HORSEMAN_V);
				lim_b->forge_save_SPEED(HORSEMAN_V);
			}
		}
	}
}

void BASIS::hire_ARCHER(int r)
{
	if (max - limit < 2)
	{
		system("cls");
		text.Error_limit();
	}
	else
	{
		text.volume();
		string number = "";
		cin >> number;
		if (in->check_3(number, max/2) * 2 + limit <= max)
		{
			for (int i = 0; i < in->check_3(number, max/2); i++)
			{
				ARCHER_V.push_back(ARCHER(r));
				limit+=2;
				lim_b->forge_save_HP(ARCHER_V);
				lim_b->forge_save_ATTACK(ARCHER_V);
				lim_b->forge_save_SPEED(ARCHER_V);
				lim_b->forge_save_RANGE(ARCHER_V);
			}
		}
		else
		{
			in->check_4(number, limit, max, max / 2, 2);
			for (int i = 0; i < in->check_3(number, max/2); i++)
			{
				ARCHER_V.push_back(ARCHER(r));
				limit+=2;
				lim_b->forge_save_HP(ARCHER_V);
				lim_b->forge_save_ATTACK(ARCHER_V);
				lim_b->forge_save_SPEED(ARCHER_V);
				lim_b->forge_save_RANGE(ARCHER_V);
			}
		}
	}
}

void BASIS::hire_HERO(int r)
{
	system("cls");
	if ((max - limit < 5) || HERO_SOLDIER == 1 && HERO_ARCHER == 1 && HERO_MAGE == 1)
	{
		text.Error_limit();
	}
	else
	{	
		text.volume();
		string number = "";
		cin >> number;
		if (in->check_3(number, 3) * 5 + limit <= max)/*-------------------------in->check_3(number, max/5) * 5 + limit <= max------------>>>>*/
		{
			for (int i = 0; i < in->check_3(number, 3); i++)/*-------------------------int i = 0; i < in->check_3(number, max/5); i++------------>>>>*/
			{	
				string name;
				cin.ignore();
				in->NAME(name);

				int tmp = rand() % 3 + 1;
				if ((tmp == 1 && HERO_SOLDIER == 1) || (tmp == 2 && HERO_ARCHER == 1) || (tmp == 3 && HERO_MAGE == 1))
				{
					do
					{
						tmp = rand() % 3 + 1;
					} while ((tmp == 1 && HERO_SOLDIER == 1) || (tmp == 2 && HERO_ARCHER == 1) || (tmp == 3 && HERO_MAGE == 1));
				}
				if (tmp == 1)
				{
					HERO_V.push_back(HERO(name, tmp, r));
					HERO_SOLDIER++;
					lim_b->forge_save_ATTACK(HERO_V);
				}
				else if (tmp == 2)
				{
					HERO_V.push_back(HERO(name, tmp, r));
					HERO_ARCHER++;
					lim_b->forge_save_RANGE(HERO_V);
					lim_b->forge_save_ATTACK(HERO_V);
				}
				else if (tmp == 3)
				{
					HERO_V.push_back(HERO(name, tmp, r));
					HERO_MAGE++;
				}
				limit += 5;
				lim_b->forge_save_HP(HERO_V);
				lim_b->forge_save_SPEED(HERO_V);
			}
		}
		else
		{
			in->check_4(number, limit, max, 3, 5); /*-----------------------in->check_4(number, limit, max, max / 5, 5);------------>>>*/
			for (int i = 0; i < in->check_3(number, 3); i++)/*----------------int i = 0; i < in->check_3(number, max/5); i++--------------->>>*/
			{
				string name;
				cin.ignore();
				in->NAME(name);
				int tmp = rand() % 3 + 1;
				if ((tmp == 1 && HERO_SOLDIER == 1) || (tmp == 2 && HERO_ARCHER == 1) || (tmp == 3 && HERO_MAGE == 1))
				{
					do
					{
						tmp = rand() % 3 + 1;
					} while ((tmp == 1 && HERO_SOLDIER == 1) || (tmp == 2 && HERO_ARCHER == 1) || (tmp == 3 && HERO_MAGE == 1));
				}
				if (tmp == 1)
				{
					HERO_V.push_back(HERO(name, tmp, r));
					HERO_SOLDIER++;
					lim_b->forge_save_ATTACK(HERO_V);
				}
				else if (tmp == 2)
				{
					HERO_V.push_back(HERO(name, tmp, r));
					HERO_ARCHER++;
					lim_b->forge_save_RANGE(HERO_V);
					lim_b->forge_save_ATTACK(HERO_V);
				}
				else if (tmp == 3)
				{
					HERO_V.push_back(HERO(name, tmp, r));
					HERO_MAGE++;
				}
				limit += 5;
				lim_b->forge_save_HP(HERO_V);
				lim_b->forge_save_SPEED(HERO_V);
			}
		}
	}
}

void BASIS::hire_BUILDER()
{
	if (max - limit < 1)
	{
		system("cls");
		text.Error_limit();
	}
	else
	{
		text.volume();
		string number = "";
		cin >> number;
		if (in->check_3(number, max / 1) + limit <= max)
		{
			int m = in->check_3(number, max / 1);
			for (int i = 0; i < m; i++)
			{
				BUILDER_V.push_back(BUILDER());
				limit++;
				lim_b->forge_save_HP(BUILDER_V);
			}
		}
		else
		{
			in->check_4(number, limit, max, max / 1, 1);
			int m = in->check_3(number, max / 1);
			for (int i = 0; i < m; i++)
			{
				BUILDER_V.push_back(BUILDER());
				limit++;
				lim_b->forge_save_HP(BUILDER_V);
			}
		}
	}

}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------*/


void BASIS::limit_extension(int r)
{
	system("cls");
	if (BUILDER_V.size() < 1)
	{
		text.colors(4);
		cout << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t      У вас нет строителей, чтобы расширить лимит" << endl << endl;
		_getch();
	}
	else
	{
		if (lim_b->lim_casern == 0 && lim_b->lim_farm == 0 && lim_b->lim_house == 0 && lim_b->forge == 0 && lim_b->hall_of_heroes == 0 && lim_b->shrine == 0)
		{
			text.colors(4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << "\t\t      Вы построили все постройки, что можно было." << endl << endl;
			_getch();
		}
		else
		{
			lim_b->begin(limit, max, BUILDER_V, r, obsidian);
		}
	}
}

void BASIS::PVP()
{
	system("cls");
	text.colors(10);
	cout << "\t\t\tВы развились полностью. \n   Вы можете начать войну или же вернуться и изменить состав своей армии." << endl << endl
		<< "\t\t\t1 - Начать войну." << endl
		<< "\t\t\t2 - Вернуться в поселение." << endl;
	string n = "";
	int N;
	in->cin_(n, N, 1, 2);
	if (N == 1)
	{
		int pvp_max = 115;
		vector<NPC>			NPC_PVP;
		vector<SOLDIER>		SOLDIER_PVP;
		vector<HORSEMAN>	HORSEMAN_PVP;
		vector<ARCHER>		ARCHER_PVP;
		vector<HERO>		HERO_PVP;
		vector<BUILDER>		BUILDER_PVP;
		NPC_PVP.push_back(NPC());

		int					sum = 0,
							soldier,
							horseman,
							archer,
							hero, 
							builder;
		do
		{
			sum = 0;
			soldier = (rand() % 115) / 1;
			horseman = (rand() % 115) / 3;
			archer = (rand() % 115) / 2;
			hero = rand() % 3;
			builder = rand() % 114 + 1;
			sum = soldier * 1 + horseman * 3 + archer * 2 + hero * 5 + builder;
		} while (sum != pvp_max);
		/*----------------------------------Создание юнитов противника и подсчет сумм характеристик---------------------------------------*/
		int					sum_PVP_hp =		0,
							sum_PVP_attack =	0,
							sum_PVP_speed =		0,
							sum_PVP_range =		0,
							sum_PVP_XP =		0,
							sum_PVP_regen =		0;
		for (int i = 0; i < soldier; i++)
		{
			SOLDIER_PVP.push_back(SOLDIER());
			sum_PVP_hp += SOLDIER_PVP[i].HP;
			sum_PVP_speed += SOLDIER_PVP[i].speed;
			sum_PVP_attack += SOLDIER_PVP[i].attack;
			sum_PVP_XP += rand()% 5 + 5;
		}
		for (int i = 0; i < horseman; i++)
		{
			HORSEMAN_PVP.push_back(HORSEMAN());
			sum_PVP_hp += HORSEMAN_PVP[i].HP;
			sum_PVP_speed += HORSEMAN_PVP[i].speed;
			sum_PVP_attack += HORSEMAN_PVP[i].attack;
			sum_PVP_XP += rand() % 5 + 15;
		}
		for (int i = 0; i < archer; i++)
		{
			ARCHER_PVP.push_back(ARCHER());
			sum_PVP_hp += ARCHER_PVP[i].HP;
			sum_PVP_speed += ARCHER_PVP[i].speed;
			sum_PVP_attack += ARCHER_PVP[i].attack;
			sum_PVP_range += ARCHER_PVP[i].range;
			sum_PVP_XP += rand() % 5 + 10;
		}
		for (int i = 0; i < builder; i++)
		{
			BUILDER_PVP.push_back(BUILDER());
			sum_PVP_hp += BUILDER_PVP[i].HP;
			sum_PVP_XP += rand() % 4 + 1;
		}
		int hero_soldier = 0;
		int hero_archer = 0;
		int hero_mage = 0;
		for (int i = 0; i < hero; i++)
		{
			int tmp = rand() % 3 + 1;
			if ((tmp == 1 && hero_soldier == 1) || (tmp == 2 && hero_archer == 1) || (tmp == 3 && hero_mage == 1))
			{
				do
				{
					tmp = rand() % 3 + 1;
				} while ((tmp == 1 && hero_soldier == 1) || (tmp == 2 && hero_archer == 1) || (tmp == 3 && hero_mage == 1));
			}
			if (tmp == 1)
			{
				HERO_PVP.push_back(HERO(tmp));
				hero_soldier++;

			}
			else if (tmp == 2)
			{
				HERO_PVP.push_back(HERO(tmp));
				sum_PVP_range += HERO_PVP[i].range;
				hero_archer++;
			}
			else if (tmp == 3)
			{
				HERO_PVP.push_back(HERO(tmp));
				sum_PVP_regen += HERO_PVP[i].regen;
				hero_mage++;
			}
			sum_PVP_hp += HERO_PVP[i].HP;
			sum_PVP_speed += HERO_PVP[i].speed;
			sum_PVP_attack += HERO_PVP[i].attack;
			sum_PVP_XP += rand() % 5 + 20;
		}
		text.colors(10);
		cout << endl << "\t\t\tАрмия вашего противника:" << endl;
		text.output_unit_PVP(SOLDIER_PVP, HORSEMAN_PVP, ARCHER_PVP, HERO_PVP, BUILDER_PVP);		
		/*-----------------------------------------------Посчет сумм характеристик игрока-------------------------------------------------*/
		int					sum_V_hp =			0,
							sum_V_attack =		0,
							sum_V_speed =		0,
							sum_V_range =		0,
							sum_V_regen =		0;
		for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
		{
			sum_V_hp += SOLDIER_V[i].HP;
			sum_V_speed += SOLDIER_V[i].speed;
			sum_V_attack += SOLDIER_V[i].attack;
		}
		for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
		{
			sum_V_hp += HORSEMAN_V[i].HP;
			sum_V_speed += HORSEMAN_V[i].speed;
			sum_V_attack += HORSEMAN_V[i].attack;
		}
		for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
		{
			sum_V_hp += ARCHER_V[i].HP;
			sum_V_speed += ARCHER_V[i].speed;
			sum_V_attack += ARCHER_V[i].attack;
			sum_V_range += ARCHER_V[i].range;
		}
		for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
		{
			sum_V_hp += BUILDER_V[i].HP;
		}
		for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
		{
			sum_V_hp += HERO_V[i].HP;
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
		/*--------------------------------------------------------------------------------------------------------------------------------*/
		int					speed_V_add	=		0,
							speed_PVP_add =		0;
		if			(sum_V_speed > sum_PVP_speed)		speed_V_add += 15;
		else if		(sum_PVP_speed > sum_V_speed)		speed_PVP_add += 15;

		int					range_V_add =		0,
							range_PVP_add =		0;
		if			(sum_V_range > sum_PVP_range)		range_V_add += 15;
		else if		(sum_PVP_range > sum_V_range)		range_PVP_add += 15;
		/*--------------------------------------------------------------------------------------------------------------------------------*/
		do
		{
			/*-------------------------------Противник------------------------------------*/
					sum_PVP_hp =		0;
					sum_PVP_attack =	0;
					sum_PVP_regen =		0;
			int		sum_PVP_unit =		0;

			for (unsigned int i = 0; i < (unsigned)SOLDIER_PVP.size(); i++)
			{
				sum_PVP_hp += SOLDIER_PVP[i].HP;
				sum_PVP_attack += SOLDIER_PVP[i].attack;
				sum_PVP_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)HORSEMAN_PVP.size(); i++)
			{
				sum_PVP_hp += HORSEMAN_PVP[i].HP;
				sum_PVP_attack += HORSEMAN_PVP[i].attack;
				sum_PVP_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)ARCHER_PVP.size(); i++)
			{
				sum_PVP_hp += ARCHER_PVP[i].HP;
				sum_PVP_attack += ARCHER_PVP[i].attack;
				sum_PVP_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)BUILDER_PVP.size(); i++)
			{
				sum_PVP_hp += BUILDER_PVP[i].HP;
				sum_PVP_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)HERO_PVP.size(); i++)
			{
				sum_PVP_hp += HERO_PVP[i].HP;
				sum_PVP_attack += HERO_PVP[i].attack;
				if (HERO_PVP[i].ID == 3)
				{
					sum_PVP_regen += HERO_PVP[i].regen;
				}
				sum_PVP_unit++;
			}
			/*-------------------------------Игрок------------------------------------*/
					sum_V_hp =			0;
					sum_V_attack =		0;
					sum_V_regen =		0;
			int		sum_V_unit =		0;
			for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
			{
				sum_V_hp += SOLDIER_V[i].HP;
				sum_V_attack += SOLDIER_V[i].attack;
				sum_V_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
			{
				sum_V_hp += HORSEMAN_V[i].HP;
				sum_V_attack += HORSEMAN_V[i].attack;
				sum_V_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
			{
				sum_V_hp += ARCHER_V[i].HP;
				sum_V_attack += ARCHER_V[i].attack;
				sum_V_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
			{
				sum_V_hp += BUILDER_V[i].HP;
				sum_V_unit++;
			}
			for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
			{
				sum_V_hp += HERO_V[i].HP;
				sum_V_attack += HERO_V[i].attack;
				sum_V_unit++;
				if (HERO_V[i].ID == 3) sum_V_regen += HERO_V[i].regen;	
			}	
			/*---------------------------------------------------------------------------------------*/
			if (sum_V_hp <= 0)				break;
			else if (sum_PVP_hp <= 0)		break;
			/*-------------------------------Дополнительная атака------------------------------------*/
			int			tmp_V =			0,
						tmp_PVP =		0;
			for (unsigned int k = 0; k < (unsigned)HERO_V.size(); k++)
			{
				if ((rand() % 99 + 1) <= 5 && HERO_V[k].mana >= 10 && HERO_V[k].ID != 3)
				{
					tmp_V += 10;
					HERO_V[k].mana -= 10;
				}
			}
			for (unsigned int k = 0; k < (unsigned)HERO_PVP.size(); k++)
			{
				if ((rand() % 99 + 1) <= 5  && HERO_PVP[k].mana >= 10 && HERO_PVP[k].ID != 3)
				{
					tmp_PVP += 10;
					HERO_PVP[k].mana -= 10;
				}
			}
			/*---------------------------------------------------------------------------------------*/
			if		(sum_PVP_unit == 0 || sum_V_unit == 0)		break;
			sum_V_attack -= sum_V_regen;
			/*--------------------------------------------------------*/
			int			numb_PVP	= 0, 
						mid_PVP_S	= 0,
						mid_PVP_A	= 0,
						mid_PVP_H	= 0,
						mid_PVP_B	= 0,
						mid_PVP_H_H = 0,
						mid_PVP		= 0;		
			if (SOLDIER_PVP.size() != 0)	++numb_PVP;		
			if (ARCHER_PVP.size() != 0)		++numb_PVP;		
			if (HORSEMAN_PVP.size() != 0)	++numb_PVP;	
			if (BUILDER_PVP.size() != 0)	++numb_PVP;
			if (HERO_PVP.size() != 0)		++numb_PVP;			
			mid_PVP = (sum_V_attack + tmp_V) / numb_PVP;
			if (HERO_PVP.size() != 0)		mid_PVP_H_H = mid_PVP;
			if (SOLDIER_PVP.size() != 0)
			{
				mid_PVP_S = mid_PVP;
				if (mid_PVP_H_H != 0)
				{
					mid_PVP_S += mid_PVP_H_H / 2;
					mid_PVP_H_H /= 2;
				}
				for (unsigned int i = 0; i < (unsigned)SOLDIER_PVP.size(); ++i)
				{
					int tmp = SOLDIER_PVP[i].HP - mid_PVP_S;
					if (tmp <= 0)
					{
						mid_PVP_S -= SOLDIER_PVP[i].HP;
						SOLDIER_PVP.erase(SOLDIER_PVP.begin() + i);
						--i;
					}
					else
					{
						SOLDIER_PVP[i].HP -= mid_PVP_S;
						mid_PVP_S = 0;
						break;
					}
				}
			}
			if (HORSEMAN_PVP.size() != 0)
			{
				mid_PVP_H = mid_PVP;
				if (mid_PVP_S != 0)
				{
					mid_PVP_H += mid_PVP_S;
					mid_PVP_S = 0;
				}
				for (unsigned int i = 0; i < (unsigned)HORSEMAN_PVP.size(); i++)
				{
					int tmp = HORSEMAN_PVP[i].HP - mid_PVP_H;
					if (tmp <= 0)
					{
						mid_PVP_H -= HORSEMAN_PVP[i].HP;
						HORSEMAN_PVP.erase(HORSEMAN_PVP.begin() + i);
						--i;
					}
					else
					{
						HORSEMAN_PVP[i].HP -= mid_PVP_H;
						mid_PVP_H = 0;
						break;
					}
				}
			}
			if (HERO_PVP.size() != 0)
			{
				if (mid_PVP_H != 0)
				{
					mid_PVP_H_H += mid_PVP_H;
					mid_PVP_H = 0;
				}
				if (mid_PVP_S != 0)
				{
					mid_PVP_H_H += mid_PVP_S;
					mid_PVP_S = 0;
				}
				for (unsigned int i = 0; i < (unsigned)HERO_PVP.size(); i++)
				{
					int tmp = HERO_PVP[i].HP - mid_PVP_H_H;
					if (tmp <= 0)
					{
						mid_PVP_H_H -= HERO_PVP[i].HP;
						HERO_PVP.erase(HERO_PVP.begin() + i);
						--i;
					}
					else
					{
						HERO_PVP[i].HP -= mid_PVP_H_H;
						mid_PVP_H_H = 0;
						break;
					}
				}
			}
			if (ARCHER_PVP.size() != 0)
			{
				mid_PVP_A = mid_PVP;
				if (mid_PVP_H_H != 0)
				{
					mid_PVP_A += mid_PVP_H_H;
					mid_PVP_H_H = 0;
				}
				if (mid_PVP_S != 0)
				{
					mid_PVP_A += mid_PVP_S;
					mid_PVP_S = 0;
				}
				if (mid_PVP_H != 0)
				{
					mid_PVP_A += mid_PVP_H;
					mid_PVP_H = 0;
				}
				for (unsigned int i = 0; i < (unsigned)ARCHER_PVP.size(); i++)
				{
					int tmp = ARCHER_PVP[i].HP - mid_PVP_A;
					if (tmp <= 0)
					{
						mid_PVP_A -= ARCHER_PVP[i].HP;
						ARCHER_PVP.erase(ARCHER_PVP.begin() + i);
						--i;
					}
					else
					{
						ARCHER_PVP[i].HP -= mid_PVP_A;
						mid_PVP_A = 0;
						break;
					}
				}
			}
			if (BUILDER_PVP.size() != 0)
			{
				mid_PVP_B = mid_PVP;
				if (mid_PVP_S != 0)
				{
					mid_PVP_B += mid_PVP_S;
					mid_PVP_S = 0;
				}
				if (mid_PVP_H != 0)
				{
					mid_PVP_B += mid_PVP_H;
					mid_PVP_H = 0;
				}
				if (mid_PVP_H_H != 0)
				{
					mid_PVP_B += mid_PVP_H_H;
					mid_PVP_H_H = 0;
				}
				if (mid_PVP_A != 0)
				{
					mid_PVP_B += mid_PVP_A;
					mid_PVP_A = 0;
				}
				for (unsigned int i = 0; i < (unsigned)BUILDER_PVP.size(); i++)
				{
					int tmp = BUILDER_PVP[i].HP - mid_PVP_B;
					if (tmp <= 0)
					{
						mid_PVP_B -= BUILDER_PVP[i].HP;						
						BUILDER_PVP.erase(BUILDER_PVP.begin() + i);
						--i;
					}
					else
					{
						BUILDER_PVP[i].HP -= mid_PVP_B;
						mid_PVP_B = 0;
						break;
					}
				}
			}
			/*--------------------------------------------------------*/
			sum_PVP_attack -= sum_PVP_regen;

			int			numb_V		= 0,
						mid_V_S		= 0,
						mid_V_A		= 0,
						mid_V_H		= 0,
						mid_V_B		= 0,
						mid_V_H_H	= 0,
						mid_V		= 0;

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
						if (HERO_V[i].ID == 1) HERO_SOLDIER--;
						if (HERO_V[i].ID == 2) HERO_ARCHER--;
						if (HERO_V[i].ID == 3) HERO_MAGE--;
						
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
		} while (sum_PVP_hp > 0 || sum_V_hp > 0);
		if				(sum_V_hp > sum_PVP_hp)
		{
			if (HERO_V.size() > 0)
			{
				int PVP_XP = sum_PVP_XP / HERO_V.size();
				for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++) HERO_V[i].LVL_UP(PVP_XP);
			}
			if (lim_b->shrine == 0)  shrine.regen(SOLDIER_V,ARCHER_V, HORSEMAN_V, HERO_V,BUILDER_V);
			text.VICTORY();
			_getch();
		}
		else if			(sum_PVP_hp > sum_V_hp)
		{
			text.DEFEAT();
			_getch();
			system("cls");

			cout << "\t\t\t\tУ противника осталось:" << endl;
			text.output_unit_PVP(SOLDIER_PVP, HORSEMAN_PVP, ARCHER_PVP, HERO_PVP, BUILDER_PVP);

			limit = 0;
			max = 15;
			SOLDIER_V.resize(0);
			HORSEMAN_V.resize(0);
			ARCHER_V.resize(0);
			HERO_V.resize(0);
			BUILDER_V.resize(0);
			lim_b->clear();
			HERO_SOLDIER = 0;
			HERO_ARCHER = 0;
			HERO_MAGE = 0;
			obsidian = 1;
			in->hunting->clear_drop();
			_getch();
		}
		/*---------------------------------------------Очистка-------------------------------------------------------*/
		NPC_PVP.resize(0);
		SOLDIER_PVP.resize(0);
		HORSEMAN_PVP.resize(0);
		ARCHER_PVP.resize(0);
		HERO_PVP.resize(0);
		BUILDER_PVP.resize(0);
	}

	text.Enter();
}
