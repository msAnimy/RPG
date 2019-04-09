#include "TextWord.h"



TextWord::TextWord(){}


TextWord::~TextWord(){}

void TextWord::Main_menu()
{
	colors(10);
	cout << "\t\t\t\t������ ����� �����)" << endl
		<< "\t\t\t\t     ������?" << endl;
	colors(2);
	cout << "\t\t\t1 - ��" << endl
		<< "\t\t\t2 - ���, �����" << endl << endl << endl << endl
		<< "\t\t\t\t\t\t    �����: �������� ���� ��-162" << endl 
		<< "\t\t\t      ������������� ��������� ���� �� ��� ������ ������." << endl << endl
		 << "������� �������� >> ";
}

void TextWord::Error_format(string &n)
{
	colors(4);
	cout << "�������� ������. ���������� �����." << endl;
	n = "";
	colors(10);
	cin >> n;
}

void TextWord::Enter()
{
	colors(2);
	cout << "������� ENTER ��� �����������..." << endl;
	_getch();
	_getch();
	system("cls");
}

void TextWord::Menu_exit()
{
	colors(10);
	cout << "\t\t\t\t������� ������ ������?" << endl;
	colors(2);
	cout << "\t\t\t1 - ��." << endl
		<< "\t\t\t2 - ���." << endl;
}

void TextWord::output_unit(int limit, vector<NPC> &NPC_V,/* vector<HORSE> &HORSE_V, */vector<SOLDIER> &SOLDIER_V, 
							vector<HORSEMAN> &HORSEMAN_V, vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, int max, vector<BUILDER> &BUILDER_V, int r, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\t\t���� �����:\t\t\t  �����: " << limit << "/" << max << endl 
		<< "\t\t\t\t\t\t\t       ��������: " << obsidian << endl << endl;
	colors(10);
	cout << "\tNPC - ";
	colors(14);
	cout << NPC_V.size() << " ��." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\t������� ������ - ";
	else if (r == 2)
		cout << "\t����� - ";
	else if (r == 3)
		cout << "\t��� - ";
	
	colors(14);
	cout << SOLDIER_V.size() << " ��." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\t�������� - ";
	else if (r == 2)
		cout << "\t������-������ - ";
	else if (r == 3)
		cout << "\t������� - ";
	colors(14);
	cout << ARCHER_V.size() << " ��." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\t�������� - ";
	else if (r == 2)
		cout << "\t������� ��� ������ - ";
	else if (r == 3)
		cout << "\t������� - ";
	colors(14);
	cout << HORSEMAN_V.size() << " ��." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\t����� - ";
	else if (r == 2)
		cout << "\t��������� - ";
	else if (r == 3)
		cout << "\t������ - ";
	colors(14);
	cout << BUILDER_V.size() << " ��." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\t��������� ������� - ";
	else if (r == 2)
		cout << "\t������� ������ - ";
	else if (r == 3)
		cout << "\t����� - ";
	colors(14);
	cout << HERO_V.size() << " ��." << endl << endl;
	
}

void TextWord::output_unit_PVP(vector<SOLDIER>& SOLDIER_V, vector<HORSEMAN>& HORSEMAN_V, vector<ARCHER>& ARCHER_V, 
								vector<HERO>& HERO_V, vector<BUILDER>& BUILDER_V)
{
	
	cout << "\t������ - ";
	colors(14);
	cout << SOLDIER_V.size() << " ��." << endl << endl;
	colors(10);
	cout << "\t������ - ";
	colors(14);
	cout << ARCHER_V.size() << " ��." << endl << endl;
	colors(10);
	cout << "\t������� - ";
	colors(14);
	cout << HORSEMAN_V.size() << " ��." << endl << endl;
	colors(10);
	cout << "\t��������� - ";
	colors(14);
	cout << BUILDER_V.size() << " ��." << endl << endl;
	colors(10);
	cout << "\t����� - ";
	colors(14);
	cout << HERO_V.size() << " ��." << endl << endl;
	_getch();
	_getch();
}

void TextWord::inout(int forge, int hall_of_heroes, int shrine, int r, int limit, int max__)
{
	colors(14);
	cout << "\t\t\t\t��� �������?" << endl << endl;
	cout << "\t   0";
	colors(10);
	cout << " - �����.";
	colors(14);
	cout << " \t\t\t\t1";
	colors(10);
	cout << " - ������ ������." << endl << endl;
	colors(14);
	cout << " \t   2";
	colors(10);
	cout << " - �������.";
	colors(14);
	cout << "\t\t\t\t3";
	colors(10);
	cout << " - ������." << endl << endl;


	colors(14);
	cout << "\t   4";
	colors(10);
	cout << " - �������.";
	if (forge == 1)
	{
		colors(4);
		cout << "����������.";
	}
	else
	{
		colors(3);
		cout << "��������.";
	}
	colors(14);
	cout << "\t\t5";
	colors(10);
	if (r == 1)
		cout << " - ��� ������.";
	else if (r == 2)
		cout << " - ������� ��������.";
	else if (r == 3)
		cout << " - ��� ������.";
	//cout << " - ��� ������.";
	if (hall_of_heroes == 1)
	{
		colors(4);
		cout << "����������." << endl << endl;
		/*if (r == 1 || r == 3) cout << endl;*/
	}
	else
	{
		colors(3);
		cout << "��������." << endl << endl;
	}
	/*if (r == 1)
		cout << endl;
	else if (r == 2)
		cout << endl;
	else if (r == 3)
		cout << endl;*/
	//cout << endl << endl;
	colors(14);
	cout << " \t   6";
	colors(10);
	cout << " - ����������.";
	colors(14);
	cout << " \t\t\t7";
	colors(10);
	cout << " - �������.";
	cout << endl << endl;
	colors(14);
	cout << "\t   8";
	colors(10);
	cout << " - ����.";
	if (shrine == 1)
	{
		colors(4);
		cout << "����������.";
	}
	else
	{
		colors(3);
		cout << "��������.\t";
	}
	colors(14);
	cout << " \t\t9";
	colors(10);
	cout << " - �����.";
	if (limit != max__)
	{
		colors(4);
		cout << "����������.";
	}
	else
	{
		colors(3);
		cout << "��������.";
	}
	cout << endl;
}

void TextWord::sack(int limit, int max, int HOH, int r, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\t����� �������?\t\t\t\t  �����: " << limit << "/" << max << endl 
		<< "\t\t\t\t\t\t\t       ��������: " << obsidian << endl
		<< "�����\t���" << endl << endl;
	colors(10);
	if (r == 1)
		cout << "  1    ������� ������\t";
	else if (r == 2)
		cout << "  1    �����\t";
	else if (r == 3)
		cout << "  1    ���\t";
	cout << endl << endl;
	colors(10);
	if (r == 1)
		cout << "  2    ��������\t";
	else if (r == 2)
		cout << "  2    ������-������\t";
	else if (r == 3)
		cout << "  2    �������\t";
	cout << endl << endl;
	colors(10);
	if (r == 1)
		cout << "  3    ��������\t";
	else if (r == 2)
		cout << "  3    ������� ��� ������\t";
	else if (r == 3)
		cout << "  3    �������\t";
	cout << endl << endl;
	if (HOH == 0)
	{
		colors(10);
		if (r == 1)
			cout << "  4    ��������� �������\t";
		else if (r == 2)
			cout << "  4    ������� ������\t";
		else if (r == 3)
			cout << "  4    �����\t";
		cout << endl << endl;
	}

	colors(10);
	cout << "  0    �����\t";
	cout << endl << endl;
	colors(14);
	cout << "����� �����?" << endl;
}

void TextWord::hire(int limit, int max, int hall_of_heroes, int r, int HP, int ATTACK, int SPEED, int RANGE, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\t����� ��������?\t\t\t\t  �����: " << limit << "/" << max << endl
		<< "\t\t\t\t\t\t\t       ��������: " << obsidian << endl << endl
		<< "�����\t���\t\t���-�� �����\t��������������" << endl << endl;
	colors(10);
	if (r == 1)
	{
		cout << "  1    ������� ������\t";
		colors(6);
		cout << "      1\t\t��������\t" << 150 + HP << " - " << 200 + HP << endl
			<< "\t\t\t\t\t��������\t" << 15 + SPEED << " - " << 20 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 5 + ATTACK << " - " << 10 + ATTACK << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  1    �����\t\t";
		colors(6);
		cout << "      1\t\t��������\t" << 100 + HP << " - " << 150 + HP <<  endl
			<< "\t\t\t\t\t��������\t" << 10 + SPEED << " - " << 15 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 15 + ATTACK << " - " << 20 + ATTACK << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  1    ���\t\t";
		colors(6);
		cout << "      1\t\t��������\t" << 200 + HP << " - " << 250 + HP << endl
			<< "\t\t\t\t\t��������\t" << 5 + SPEED << " - " << 10 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 10 + ATTACK << " - " << 15 + ATTACK << endl << endl;
	}
	colors(10);
	if (r == 1)
	{
		cout << "  2    ��������\t\t";
		colors(6);
		cout << "      2\t\t��������\t" << 125 + HP << " - " << 175 + HP << endl
			<< "\t\t\t\t\t��������\t" << 17 + SPEED << " - " << 22 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 5 + ATTACK << " - " << 10 + ATTACK << endl
			<< "\t\t\t\t\t���������\t" << 20 + RANGE << " - " << 25 + RANGE << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  2    ������-������\t";
		colors(6);
		cout << "      2\t\t��������\t" << 75 + HP << " - " << 125 + HP << endl
			<< "\t\t\t\t\t��������\t" << 12 + SPEED << " - " << 17 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 15 + ATTACK << " - " << 20 + ATTACK << endl
			<< "\t\t\t\t\t���������\t" << 10 + RANGE << " - " << 15 + RANGE << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  2    �������\t\t";
		colors(6);
		cout << "      2\t\t��������\t" << 175 + HP << " - " << 225 + HP << endl
			<< "\t\t\t\t\t��������\t" << 7 + SPEED << " - " << 12 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 10 + ATTACK << " - " << 15 + ATTACK << endl
			<< "\t\t\t\t\t���������\t" << 15 + RANGE << " - " << 20 + RANGE << endl << endl;
	}
	colors(10);
	if (r == 1)
	{
		cout << "  3    ��������\t\t";
		colors(6);
		cout << "      3\t\t��������\t" << 200 + HP << " - " << 250 + HP << endl
			<< "\t\t\t\t\t��������\t" << 15 + SPEED << " - " << 20 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 10 + ATTACK << " - " << 15 + ATTACK << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  3    ������� ��� ������";
		colors(6);
		cout << "     3\t\t��������\t" << 150 + HP << " - " << 200 + HP << endl
			<< "\t\t\t\t\t��������\t" << 10 + SPEED << " - " << 15 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 20 + ATTACK << " - " << 25 + ATTACK << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  3    �������\t\t";
		colors(6);
		cout << "      3\t\t��������\t" << 250 + HP << " - " << 300 + HP << endl
			<< "\t\t\t\t\t��������\t" << 5 + SPEED << " - " << 10 + SPEED << endl
			<< "\t\t\t\t\t�����\t\t" << 15 + ATTACK << " - " << 20 + ATTACK << endl << endl;
	}
	colors(10);
	if (r == 1)
	{
		cout << "  4    �����\t\t";
		colors(6);
		cout << "      1\t\t��������\t" << 50 + HP << " - " << 100 + HP << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  4    ���������\t";
		colors(6);
		cout << "      1\t\t��������\t" << 50 + HP << " - " << 100 + HP << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  4    ������\t\t";
		colors(6);
		cout << "      1\t\t��������\t" << 50 + HP << " - " << 100 + HP << endl << endl;
	}
	if (hall_of_heroes == 0)
	{
		colors(10);
		if (r == 1)
		{
			cout << "  5    ��������� �������";
			colors(6);
			cout << "      5\t\t��������\t" << 250 + HP << " - " << 375 + HP << endl
				<< "\t\t\t\t\t��������\t" << 25 + SPEED << " - " << 35 + SPEED << endl
				<< "\t\t\t\t\t�����\t\t" << 0 << " - " << 45 + ATTACK << endl
				<< "\t\t\t\t\t����\t\t50" << endl << endl;
		}
		else if (r == 2)
		{
			cout << "  5    ������� ������";
			colors(6);
			cout << "         5\t\t��������\t" << 200 + HP << " - " << 325 + HP << endl
				<< "\t\t\t\t\t��������\t" << 20 + SPEED << " - " << 30 + SPEED << endl
				<< "\t\t\t\t\t�����\t\t" << 0 << " - " << 40 + ATTACK << endl
				<< "\t\t\t\t\t����\t\t50" << endl << endl;
		}
		else if (r == 3)
		{
			cout << "  5    �����\t\t";
			colors(6);
			cout << "      5\t\t��������\t" << 300 + HP << " - " << 425 + HP << endl
				<< "\t\t\t\t\t��������\t" << 20 + SPEED << " - " << 25 + SPEED << endl
				<< "\t\t\t\t\t�����\t\t" << 0 << " - " << 35 + ATTACK << endl
				<< "\t\t\t\t\t����\t\t50" << endl << endl;
		}
	}
	colors(10);
	cout << "  0    �����\t\t";
	colors(6);
	cout << "      -\t\t-\t\t-" << endl << endl;
	colors(14);
	cout << "����� �����?" << endl;
}

void TextWord::forge(int limit, int max)
{
	system("cls");
	colors(11);
	cout << "\t\t\t��� ������ ���������?\t\t\t  �����: " << limit << "/" << max << endl;
	cout << endl << "  �����\t     x�������������      ��������� �� ������      ���������� ��..." << endl << endl;
	cout << "    1\t";
	colors(3);
	cout << "        ��������\t         -8\t               +20" << endl << endl;
	colors(11);
	cout << "    2\t";
	colors(3);
	cout << "        �����                    -7\t               +15" << endl << endl;
	colors(11);
	cout << "    3\t";
	colors(3);
	cout << "        ��������                 -6\t               +20" << endl << endl;
	colors(11);
	cout << "    4\t";
	colors(3);
	cout << "        ���������                -6\t               +20" << endl << endl;
	colors(11);
	cout << "    0\t";
	colors(3);
	cout << "        �����                     -\t                -" << endl << endl;
}

void TextWord::hall_of_heroes(int limit, int max, vector<HERO> &HERO_V, int r)
{
	system("cls");
	colors(14);
	cout << "\t\t\t��� ���� �����\t\t\t\t  �����: " << limit << "/" << max << endl << endl;
	for (unsigned i = 0; i < (unsigned)HERO_V.size(); i++)
	{
		colors(3);
		if (r == 1)
			cout << "\t\t��������� ������� ";
		else if (r == 2)
			cout << "\t\t������� ������ ";
		else if (r == 3)
			cout << "\t\t����� ";
		//cout << "\t\tHERO ";
		colors(11);
		cout << HERO_V[i].name << " ";
		colors(3);
		HERO_V[i].output();
		cout << endl;
	}
	_getch();
	_getch();

}


void TextWord::Error_limit()
{
	colors(4);
	cout << "�������� �����." << endl;
	_getch();
	_getch();
}

void TextWord::volume()
{
	system("cls");
	colors(10);
	cout << "������� ���-��:" << endl;
}

void TextWord::NAME()
{
	colors(14);
	cout << endl << "������� ��� �����(�� ����������!) - ";
}

void TextWord::colors(int n)
{
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | n));
}

void TextWord::character(int limit, vector<NPC> &NPC_V, vector<SOLDIER> &SOLDIER_V,
						vector<HORSEMAN> &HORSEMAN_V, vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, int max, vector<BUILDER> &BUILDER_V, int r, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\t��������������\t\t\t\t  �����: " << limit << "/" << max << endl
		<< "\t\t\t\t\t\t\t       ��������: " << obsidian << endl << endl;
	colors(10);
	if (r == 1)
		cout << "      ������� ������" << endl;
	else if (r == 2)
		cout << "      �����" << endl;
	else if (r == 3)
		cout << "      ���" << endl;
	//cout << "\tSOLDIER" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned) SOLDIER_V.size(); i++)
	{
		if (r == 1)
			cout << "\t������� ������ � " << i + 1 << " ";
		else if (r == 2)
			cout << "\t����� � " << i + 1 << " \t";
		else if (r == 3)
			cout << "\t��� � " << i + 1 << " \t";
		//cout << "\t\tsoldier � " << i + 1 << " ";
		SOLDIER_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ��������" << endl;
	else if (r == 2)
		cout << "      ������-������" << endl;
	else if (r == 3)
		cout << "      �������" << endl;
	//cout << "\tARCHER" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
	{
		if (r == 1)
			cout << "\t�������� � " << i + 1 << " \t";
		else if (r == 2)
			cout << "\t������-������ � " << i + 1 << " ";
		else if (r == 3)
			cout << "\t������� � " << i + 1 << " \t";
		//cout << "\t\tarcher � " << i + 1 << " ";
		ARCHER_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ��������" << endl;
	else if (r == 2)
		cout << "      ������� ��� ������" << endl;
	else if (r == 3)
		cout << "      �������" << endl;
	//cout << "\tHORSEMAN" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
	{
		if (r == 1)
			cout << "\t�������� � " << i + 1 << " \t";
		else if (r == 2)
			cout << "\t������� ��� ������ � " << i + 1 << " ";
		else if (r == 3)
			cout << "\t������� � " << i + 1 << " \t";
		//cout << "\t\thorseman � " << i + 1 << " ";
		HORSEMAN_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      �����" << endl;
	else if (r == 2)
		cout << "      ���������" << endl;
	else if (r == 3)
		cout << "      ������" << endl;
	//cout << "\tBUILDER" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
	{
		if (r == 1)
			cout << "\t����� � " << i + 1 << " \t";
		else if (r == 2)
			cout << "\t��������� � " << i + 1 << " \t";
		else if (r == 3)
			cout << "\t������ � " << i + 1 << " \t";
		//cout << "\t\tbuilder � " << i + 1 << " ";
		BUILDER_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ��������� �������" << endl;
	else if (r == 2)
		cout << "      ������� ������" << endl;
	else if (r == 3)
		cout << "      �����" << endl;
	//cout << "\tHERO" << endl;
	for (unsigned int i = 0; i < (unsigned) HERO_V.size(); i++)
	{
		colors(6);
		if (r == 1)
			cout << "\t��������� ������� \t";
		else if (r == 2)
			cout << "\t������� ������ \t\t";
		else if (r == 3)
			cout << "\t����� \t";
		//cout << "\t\thero ";
		colors(14);
		cout << HERO_V[i].name << " ";
		colors(6);
		HERO_V[i].output();
	}
	Enter();
}

void TextWord::limit_exten(int limit, int max, int lim_house, int lim_farm, int lim_casern, int forge, int hall_of_heroes, int shrine, int r, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\t��� ���������?\t\t\t\t  �����: " << limit << "/" << max << endl
		<< "\t\t\t\t\t\t\t       ��������: " << obsidian << endl << endl
		<< "�����\t���\t\t����� ��������\t��������������" << endl << endl;
	colors(6);
	cout << "  1";
	colors(10);
	if (r == 1)
		cout << "    ���\t";
	else if (r == 2)
		cout << "    �����\t";
	else if (r == 3)
		cout << "    ������\t";
	//cout << "    HOUSE\t";
	colors(6);
	cout << "      \t      " << lim_house << "\t\t����� + 5" << endl << endl;
	cout << "  2";
	colors(10);
	if (r == 1)
		cout << "    �����\t\t";
	else if (r == 2)
		cout << "    ��������\t\t";
	else if (r == 3)
		cout << "    ���������� ������";
	//cout << "    FARM\t";
	colors(6);
	cout << "      " << lim_farm << "\t\t����� + 10" << endl << endl;
	cout << "  3";
	colors(10);
	if (r == 1)
		cout << "    �������\t";
	else if (r == 2)
		cout << "    ���������";
	else if (r == 3)
		cout << "    �����\t";
	//cout << "    CASERN\t";
	colors(6);
	cout << "\t      " << lim_casern << "\t\t����� + 15" << endl << endl;
	cout << "  4";
	colors(10);
	cout << "    �������\t";
	colors(6);
	cout << "      \t      " << forge << "\t\t�������� ����������." << endl << endl;
	cout << "  5";
	colors(10);
	if (r == 1)
		cout << "    ��� ������\t";
	else if (r == 2)
		cout << "    ������� ��������\t";
	else if (r == 3)
		cout << "    ��� ������\t";
	//cout << "    HALL OF HEROES\t";
	colors(6);
	cout << "      " << hall_of_heroes << "\t\t����������� �������� ������." << endl << endl;
	cout << "  6";
	colors(10);
	cout << "    ����\t";
	colors(6);
	cout << "              " << shrine << "\t\t����������� ������ ������." << endl << endl;
	cout << "  0";
	colors(10);
	cout << "    �����\t";
	colors(6);
	cout << "      " << "    " << "\t\t��������� � ���������." << endl << endl;
	//Enter();
}

void TextWord::Error_limit_exten()
{
	colors(4);
	cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\t�������� ����� ���������." << endl;
	_getch();
}

void TextWord::DEFEAT()
{
	system("cls");
	colors(10);
	char s = '�';
	string ss = "��";
	cout << endl << endl << endl << endl << endl << endl << endl
		<< "\t\t" << ss << ss << "      "			<< ss << ss << ss  << "   "	<< ss << ss << ss << "   "	<< ss << ss << ss << "     "	<< ss << ss << "     "	<< ss << ss << ss << ss << endl
		<< "\t\t" << ss << ss << "      "			<< ss << ss << ss  << "   "	<< ss << ss << ss << "   "	<< ss << ss << ss << "     "	<< ss << ss << "     "	<< ss << ss << ss << ss << endl
		<< "\t\t" << ss << "   " << ss << "   "		<< ss << "       "			<< ss << "       "			<< ss <<	"       "		<< ss << "    " << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << "   " << ss << "   "		<< ss << "       "			<< ss << "       "			<< ss <<	"       "		<< ss << "    " << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << "   " << ss << "   "		<< ss << ss << "     "		<< ss << ss << "     "		<< ss << ss << "     "		<< ss << "    " << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << "   " << ss << "   "		<< ss << ss << "     "		<< ss << ss << "     "		<< ss << ss << "     "		<< ss << "    " << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << "   " << ss << "   "		<< ss << "       "			<< ss << "       "			<< ss <<	"       "		<< ss << ss << ss << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << "   " << ss << "   "		<< ss << "       "			<< ss << "       "			<< ss <<	"       "		<< ss << ss << ss << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << ss << "      "			<< ss << ss << ss << "   "	<< ss << "       "			<< ss << ss << ss << "   "	<< ss << "    " << ss << "   " << "   " << ss << endl
		<< "\t\t" << ss << ss << "      "			<< ss << ss << ss << "   "	<< ss << "       "			<< ss << ss << ss << "   "	<< ss << "    " << ss << "   " << "   " << ss << endl;
	_getch();
}

void TextWord::VICTORY()
{
	system("cls");
	colors(10);
	char s = '�';
	string ss = "��";
	cout << endl << endl << endl << endl << endl << endl << endl
		<< "\t"		<< ss << "  " << ss << "   "	<< "  " << ss << "     "	<< "  " << ss << "  " << "   "		<< ss << ss << ss << ss << "   "	<< "  " << ss << "  " << "   "			<< "  " << ss << "  " << "   "		<< ss << "  " << ss << endl
		<< "\t"		<< ss << "  " << ss << "   "	<< "  " << ss << "     "    << "  " << ss << "  " << "   "		<< ss << ss << ss << ss << "   "	<< "  " << ss << "  " << "   "			<< "  " << ss << "  " << "   "		<< ss << "  " << ss << endl
		<< "\t"		<< ss << "  " << ss << "   "	<< "  " << ss << "     "	<< ss << "  " << ss	<< "   "		<< "   " << ss << "      "			<< ss << "  " << ss << "   "			<< ss << "  " << ss << "   "		<< ss << "  " << ss << endl
		<< "\t"		<< ss << "  " << ss << "   "	<< "  " << ss << "     "	<< ss << "  " << ss << "   "		<< "   " << ss << "      "			<< ss << "  " << ss << "   "			<< ss << "  " << ss << "   "		<< ss << "  " << ss << endl
		<< "\t"		<< ss << "  " << ss << "   "	<< "  " << ss << "     "	<< ss << "       "					<< "   " << ss << "      "			<< ss << "  " << ss << "   "			<< ss << ss << "  " << "   "		<< " " << ss << ss << endl
		<< "\t"		<< ss << "  " << ss << "   "	<< "  " << ss << "     "	<< ss << "       "					<< "   " << ss << "      "			<< ss << "  " << ss << "   "			<< ss << ss << "  " << "   "		<< " " << ss << ss << endl
		<< "\t" << " "	<< ss << ss << "    "		<< "  " << ss << "     "	<< ss << "  " << ss << "   "		<< "   " << ss << "      "			<< ss << "  " << ss << "   "			<< ss << "  " << ss << "   "		<< "  " << ss << endl
		<< "\t" << " "	<< ss << ss << "    "		<< "  " << ss << "     "	<< ss << "  " << ss << "   "		<< "   " << ss << "      "			<< ss << "  " << ss << "   "			<< ss << "  " << ss << "   "		<< "  " << ss << endl
		<< "\t" << "  "	   << ss << "     "			<< "  " << ss << "     "	<< "  " << ss << "  " << "   "		<< "   " << ss << "      "			<< "  " << ss << "  " << "   "			<< ss << "  " << ss << "   "		<< "  " << ss << endl
		<< "\t" << "  "	   << ss << "     "			<< "  " << ss << "     "	<< "  " << ss << "  " << "   "		<< "   " << ss << "      "			<< "  " << ss << "  " << "   "			<< ss << "  " << ss << "   "		<< "  " << ss << endl;
	_getch();
}

void TextWord::HUNTING(vector<GOBLIN> &GOBLIN_V, vector<GOBLIN_HORSEMAN> & GOBLIN_HORSEMAN_V, vector<GOBLIN_ARCHER> & GOBLIN_ARCHER_V)
{
	system("cls");
	colors(14);
	cout << "\t\t\t\t���� ����������"  << endl << endl
		<< "\t���" << endl << endl;
	colors(10);
	cout << "\t������\t" << GOBLIN_V.size() << " ��";
	cout << endl << endl;
	cout << "\t������ ������\t" << GOBLIN_ARCHER_V.size() << " ��";
	cout << endl << endl;
	cout << "\t������ ��������\t" << GOBLIN_HORSEMAN_V.size() << " ��";
	cout << endl << endl;
	
	//Enter();
	cout << "\t\t\t\t   ����������?" << endl << endl
		<< "\t\t\t1 - ��.\t\t\t2 - ���." << endl << endl;
}

void TextWord::SRINE()
{
	system("cls");
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
	cout << endl << endl << endl << endl << endl << endl << endl << endl
		<< "\t������ ����� �������� HP � MANA � ����� ������ ����� ����������������." << endl;
	_getch();
}

void TextWord::menu_race()
{
	system("cls");
	colors(14);
	cout << "\t\t\t\t�� ����� ���� ������ ������?" << endl << endl
		<< "\t\t\t1 - �����" << endl << endl
		<< "\t\t\t2 - ������" << endl << endl
		<< "\t\t\t3 - ����" << endl << endl;
	colors(6);
}

void TextWord::hunting_menu(bool lvl_1, bool lvl_2, bool lvl_3, bool lvl_4, bool lvl_5, bool lvl_6, bool lvl_7,
	bool lvl_8, bool lvl_9, bool lvl_10)
{
	system("cls");
	colors(14);
	cout << "\t\t\t\t  ����� �������?" << endl << endl;
	colors(10);
	cout << "\t1 - �������.";
	if (lvl_1 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << "\t\t2 - �������.";
	if (lvl_2 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << endl << endl << "\t3 - �������.";
	if (lvl_3 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << "\t\t4 - �������.";
	if (lvl_4 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << endl << endl << "\t5 - �������.";
	if (lvl_5 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << "\t\t6 - �������.";
	if (lvl_6 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << endl << endl << "\t7 - �������.";
	if (lvl_7 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << "\t\t8 - �������.";
	if (lvl_8 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << endl << endl << "\t9 - �������.";
	if (lvl_9 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << "\t\t10 - �������.";
	if (lvl_10 == false)
	{
		colors(3);
		cout << " ��������.\t";
	}
	else
	{
		colors(4);
		cout << " �� ��������.";
	}
	colors(10);
	cout << endl << endl << "\t\t\t\t   0 - �����." << endl << endl;
}

void TextWord::Error_obsidian()
{
	colors(4);
	cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\t�� ������� ��������." << endl;
	_getch();
	_getch();
}
