#include "Interface.h"



Interface::Interface()
{
	basis = new BASIS(this);
	hunting = new HUNTING(this);
}
Interface::~Interface(){}


/*œ–Œ¬≈– ¿ Õ¿ ¡” ¬€ ÷» À*/
void Interface::check_1(string &n)
{
	bool ok = true;
	for (unsigned int i = 0; i < ((unsigned)n.size()); i++)
	{
		if (n[i] < 48 || n[i] > 57)
		{
			ok = false;
			break;
		}
	}
	if (ok == false)
	{
		cout << endl;
		do
		{
			text.Error_format(n);
			ok = true;
			for (unsigned int i = 0; i < (unsigned)n.size(); i++)
			{
				if (n[i] < 48 || n[i] > 57)
				{
					ok = false;
					break;
				}
			}
		} while (ok == false);
	}
}

/*œ≈–¬Œ≈ Ã≈Õﬁ*/
void Interface::menu_0()
{
	text.Main_menu();
	string n = "";
	int N;
	cin_(n, N, 1, 2);
	if (N == 1)
	{
		menu_race();
		/*system("cls");
		basis->begin();
		text.Enter();*/
	}
	else
		exit(0);
}

/*œ–Œ¬≈– ¿ ÷»‘– ¬ ƒ»¿œ¿«ŒÕ≈*/
void Interface::check_2(int l, int r, int &N, string &n)
{
	if (N < l || N > r)
	{
		cout << endl;
		do
		{
			text.Error_format(n);
			check_1(n);
			N = strtol(n.c_str(), &us, 10);
		} while (N < l || N > r);
	}
}


/*”¬ŒÀ»“‹ »À» Õ¿Õﬂ“‹*/
void Interface::menu_2(int &max__, bool &ok, int r)
{
	text.inout(basis->lim_b->forge, basis->lim_b->hall_of_heroes, basis->lim_b->shrine, r, basis->limit, basis->max__);
	string n = "";
	int N; 
	cin_(n, N, 0, 9);
	if (N == 2)
	{
		basis->sack(r);
	}
	else if (N == 3)
	{
		basis->hire(r);
	}
	else if (N == 1)
	{
		basis->Clear(r);
		basis->NPC_V.resize(0);
		hunting->clear_drop();
		text.Enter();
		menu_0();
	}
	else if (N == 0)
		exit(0);
	else if (N == 4)
	{
		if (basis->lim_b->forge == 1)
		{
			text.colors(4);
			cout << "ÕÂ‰ÓÒÚÛÔÌÓ!" << endl;
			_getch();
			_getch();
			ok = false;
		}
		else
		{
			basis->lim_b->menu_0(basis->limit, basis->max, basis->SOLDIER_V,
								basis->HORSEMAN_V, basis->ARCHER_V, basis->HERO_V, basis->BUILDER_V, max__);
		}
	}
	else if (N == 5)
	{
		if (basis->lim_b->hall_of_heroes == 1)
		{
			text.colors(4);
			cout << "ÕÂ‰ÓÒÚÛÔÌÓ!" << endl;
			_getch();
			_getch();
			ok = false;
		}
		else
		{
			basis->lim_b->menu_1(basis->limit, basis->max, basis->HERO_V, r);
		}
	}
	else if (N == 6)
	{
		hunting->begin( basis->SOLDIER_V, basis->HORSEMAN_V, basis->ARCHER_V, basis->BUILDER_V,
			basis->HERO_V, basis->limit, basis->max, basis->HERO_SOLDIER, basis->HERO_ARCHER, basis->HERO_MAGE, r,basis->obsidian);
	}
	else if (N == 7)
	{
		basis->limit_extension(r);
	}
	else if (N == 8)
	{
		if (basis->lim_b->shrine == 1)
		{
			text.colors(4);
			cout << "ÕÂ‰ÓÒÚÛÔÌÓ!" << endl;
			_getch();
			_getch();
			ok = false;
		}
		else Shrine.begin();
		
	}
	else if (N == 9)
	{
		if (basis->limit != basis->max__)
		{
			text.colors(4);
			cout << "ÕÂ‰ÓÒÚÛÔÌÓ!" << endl;
			_getch();
			_getch();
			ok = false;
		}
		else basis->PVP();
	}
}

int Interface::check_3(string & num, int size)
{
	check_1(num);
	int N = strtol(num.c_str(), &us, 10);
	if (N < 1 || N > size)
	{
		if (N > size)
		{
			cout << endl;
			do
			{
				text.Error_limit();
				num = "";
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 10));
				cin >> num;
				check_1(num);
				N = strtol(num.c_str(), &us, 10);
			} while (N < 1 || N > size);
		}
		else
		{
			cout << endl;
			do
			{
				text.Error_format(num);
				check_1(num);
				N = strtol(num.c_str(), &us, 10);
			} while (N < 1 || N > size);
		}
	}
	return N;
}

void Interface::check_4(string &number, int limit, int max, int n, int i)
{
	do
	{
		text.Error_limit();
		text.colors(10);
		number = "";
		cin >> number;
	} while (check_3(number, n) * i + limit > max);
}

void Interface::NAME(string & NAME)
{
	text.NAME();
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 10));
	cin.sync();
	getline(cin, NAME);
	cout << endl;
}

void Interface::menu_race()
{
	text.menu_race();
	string n = "";
	int N;
	cin_(n, N, 1, 3);
	system("cls");
	if (N == 1)
	{
		basis->begin(1);
	}
	else if (N == 2)
	{
		basis->begin(2);
	}
	else if (N == 3)
	{
		basis->begin(3);
	}
	text.Enter();
}

void Interface::cin_(string & n, int & N, int l, int r)
{
	text.colors(2);
	cin >> n;
	check_1(n);
	N = strtol(n.c_str(), &us, 10);
	check_2(l, r, N, n);
}