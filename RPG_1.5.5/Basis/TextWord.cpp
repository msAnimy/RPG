#include "TextWord.h"



TextWord::TextWord(){}


TextWord::~TextWord(){}

void TextWord::Main_menu()
{
	colors(10);
	cout << "\t\t\t\tÄîáðîå âðåìÿ ñóòîê)" << endl
		<< "\t\t\t\t     Íà÷íåì?" << endl;
	colors(2);
	cout << "\t\t\t1 - Äà" << endl
		<< "\t\t\t2 - Íåò, âûéòè" << endl << endl << endl << endl
		<< "\t\t\t\t\t\t    àâòîð: Çàõàðîâà Àííà ÊÑ-162" << endl 
		<< "\t\t\t      Ðåêîìåíäóåòñÿ ðàñòÿíóòü îêíî íà âñþ âûñîòó ýêðàíà." << endl << endl
		 << "Ââåäèòå çíà÷åíèå >> ";
}

void TextWord::Error_format(string &n)
{
	colors(4);
	cout << "Íåâåðíûé ôîðìàò. Ïîïðîáóéòå ñíîâà." << endl;
	n = "";
	colors(10);
	cin >> n;
}

void TextWord::Enter()
{
	colors(2);
	cout << "Íàæìèòå ENTER äëÿ ïðîäîëæåíèÿ..." << endl;
	_getch();
	_getch();
	system("cls");
}

void TextWord::Menu_exit()
{
	colors(10);
	cout << "\t\t\t\tÆåëàåòå íà÷àòü çàíîâî?" << endl;
	colors(2);
	cout << "\t\t\t1 - Äà." << endl
		<< "\t\t\t2 - Íåò." << endl;
}

void TextWord::output_unit(int limit, vector<NPC> &NPC_V,/* vector<HORSE> &HORSE_V, */vector<SOLDIER> &SOLDIER_V, 
							vector<HORSEMAN> &HORSEMAN_V, vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, int max, vector<BUILDER> &BUILDER_V, int r, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\t\tÂàøè þíèòû:\t\t\t  Ëèìèò: " << limit << "/" << max << endl 
		<< "\t\t\t\t\t\t\t       Îáñèäèàí: " << obsidian << endl << endl;
	colors(10);
	cout << "\tNPC - ";
	colors(14);
	cout << NPC_V.size() << " øò." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\tÐÀÇßÙÈÉ ÊËÈÍÎÊ - ";
	else if (r == 2)
		cout << "\tÇÎÌÁÈ - ";
	else if (r == 3)
		cout << "\tÎÐÊ - ";
	
	colors(14);
	cout << SOLDIER_V.size() << " øò." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\tÐÅÉÍÄÆÅÐ - ";
	else if (r == 2)
		cout << "\tÑÊÅËÅÒ-ËÓ×ÍÈÊ - ";
	else if (r == 3)
		cout << "\tÎÕÎÒÍÈÊ - ";
	colors(14);
	cout << ARCHER_V.size() << " øò." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\tÅÄÈÍÎÐÎÃ - ";
	else if (r == 2)
		cout << "\tÂÑÀÄÍÈÊ ÁÅÇ ÃÎËÎÂÛ - ";
	else if (r == 3)
		cout << "\tÊÅÍÒÀÂÐ - ";
	colors(14);
	cout << HORSEMAN_V.size() << " øò." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\tÄÐÓÈÄ - ";
	else if (r == 2)
		cout << "\tÍÅÊÐÎÌÀÍÒ - ";
	else if (r == 3)
		cout << "\tÁÀÒÐÀÊ - ";
	colors(14);
	cout << BUILDER_V.size() << " øò." << endl << endl;
	colors(10);
	if (r == 1)
		cout << "\tÕÐÀÍÈÒÅËÜ ÏÐÈÐÎÄÛ - ";
	else if (r == 2)
		cout << "\tÄÐÅÂÍßß ÍÅÆÈÒÜ - ";
	else if (r == 3)
		cout << "\tÂÎÆÄÜ - ";
	colors(14);
	cout << HERO_V.size() << " øò." << endl << endl;
	
}

void TextWord::output_unit_PVP(vector<SOLDIER>& SOLDIER_V, vector<HORSEMAN>& HORSEMAN_V, vector<ARCHER>& ARCHER_V, 
								vector<HERO>& HERO_V, vector<BUILDER>& BUILDER_V)
{
	
	cout << "\tÑÎËÄÀÒ - ";
	colors(14);
	cout << SOLDIER_V.size() << " øò." << endl << endl;
	colors(10);
	cout << "\tËÓ×ÍÈÊ - ";
	colors(14);
	cout << ARCHER_V.size() << " øò." << endl << endl;
	colors(10);
	cout << "\tÂÑÀÄÍÈÊ - ";
	colors(14);
	cout << HORSEMAN_V.size() << " øò." << endl << endl;
	colors(10);
	cout << "\tÑÒÐÎÈÒÅËÜ - ";
	colors(14);
	cout << BUILDER_V.size() << " øò." << endl << endl;
	colors(10);
	cout << "\tÃÅÐÎÉ - ";
	colors(14);
	cout << HERO_V.size() << " øò." << endl << endl;
	_getch();
	_getch();
}

void TextWord::inout(int forge, int hall_of_heroes, int shrine, int r, int limit, int max__)
{
	colors(14);
	cout << "\t\t\t\t×òî ñäåëàòü?" << endl << endl;
	cout << "\t   0";
	colors(10);
	cout << " - Âûéòè.";
	colors(14);
	cout << " \t\t\t\t1";
	colors(10);
	cout << " - Íà÷àòü çàíîâî." << endl << endl;
	colors(14);
	cout << " \t   2";
	colors(10);
	cout << " - Óâîëèòü.";
	colors(14);
	cout << "\t\t\t\t3";
	colors(10);
	cout << " - Íàíÿòü." << endl << endl;


	colors(14);
	cout << "\t   4";
	colors(10);
	cout << " - Êóçíèöà.";
	if (forge == 1)
	{
		colors(4);
		cout << "Íåäîñòóïíî.";
	}
	else
	{
		colors(3);
		cout << "Äîñòóïíî.";
	}
	colors(14);
	cout << "\t\t5";
	colors(10);
	if (r == 1)
		cout << " - Çàë ãåðîåâ.";
	else if (r == 2)
		cout << " - Äðåâíÿÿ ãðîáíèöà.";
	else if (r == 3)
		cout << " - Çàë âîæäåé.";
	//cout << " - Çàë ãåðîåâ.";
	if (hall_of_heroes == 1)
	{
		colors(4);
		cout << "Íåäîñòóïíî." << endl << endl;
		/*if (r == 1 || r == 3) cout << endl;*/
	}
	else
	{
		colors(3);
		cout << "Äîñòóïíî." << endl << endl;
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
	cout << " - Ïîäçåìåëüå.";
	colors(14);
	cout << " \t\t\t7";
	colors(10);
	cout << " - Ñòðîéêà.";
	cout << endl << endl;
	colors(14);
	cout << "\t   8";
	colors(10);
	cout << " - Õðàì.";
	if (shrine == 1)
	{
		colors(4);
		cout << "Íåäîñòóïíî.";
	}
	else
	{
		colors(3);
		cout << "Äîñòóïíî.\t";
	}
	colors(14);
	cout << " \t\t9";
	colors(10);
	cout << " - Âîéíà.";
	if (limit != max__)
	{
		colors(4);
		cout << "Íåäîñòóïíî.";
	}
	else
	{
		colors(3);
		cout << "Äîñòóïíî.";
	}
	cout << endl;
}

void TextWord::sack(int limit, int max, int HOH, int r, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\tÊàêèõ óâîëèòü?\t\t\t\t  Ëèìèò: " << limit << "/" << max << endl 
		<< "\t\t\t\t\t\t\t       Îáñèäèàí: " << obsidian << endl
		<< "Íîìåð\tÈìÿ" << endl << endl;
	colors(10);
	if (r == 1)
		cout << "  1    ÐÀÇßÙÈÉ ÊËÈÍÎÊ\t";
	else if (r == 2)
		cout << "  1    ÇÎÌÁÈ\t";
	else if (r == 3)
		cout << "  1    ÎÐÊ\t";
	cout << endl << endl;
	colors(10);
	if (r == 1)
		cout << "  2    ÐÅÉÍÄÆÅÐ\t";
	else if (r == 2)
		cout << "  2    ÑÊÅËÅÒ-ËÓ×ÍÈÊ\t";
	else if (r == 3)
		cout << "  2    ÎÕÎÒÍÈÊ\t";
	cout << endl << endl;
	colors(10);
	if (r == 1)
		cout << "  3    ÅÄÈÍÎÐÎÃ\t";
	else if (r == 2)
		cout << "  3    ÂÑÀÄÍÈÊ ÁÅÇ ÃÎËÎÂÛ\t";
	else if (r == 3)
		cout << "  3    ÊÅÍÒÀÂÐ\t";
	cout << endl << endl;
	if (HOH == 0)
	{
		colors(10);
		if (r == 1)
			cout << "  4    ÕÐÀÍÈÒÅËÜ ÏÐÈÐÎÄÛ\t";
		else if (r == 2)
			cout << "  4    ÄÐÅÂÍßß ÍÅÆÈÒÜ\t";
		else if (r == 3)
			cout << "  4    ÂÎÆÄÜ\t";
		cout << endl << endl;
	}

	colors(10);
	cout << "  0    ÂÛÕÎÄ\t";
	cout << endl << endl;
	colors(14);
	cout << "Êàêîé íîìåð?" << endl;
}

void TextWord::hire(int limit, int max, int hall_of_heroes, int r, int HP, int ATTACK, int SPEED, int RANGE, int obsidian)
{
	system("cls");
	colors(14);
	cout << "\t\t\tÊàêèõ äîáàâèòü?\t\t\t\t  Ëèìèò: " << limit << "/" << max << endl
		<< "\t\t\t\t\t\t\t       Îáñèäèàí: " << obsidian << endl << endl
		<< "Íîìåð\tÈìÿ\t\tÊîë-âî ìåñòà\tÕàðàêòåðèñòèêè" << endl << endl;
	colors(10);
	if (r == 1)
	{
		cout << "  1    ÐÀÇßÙÈÉ ÊËÈÍÎÊ\t";
		colors(6);
		cout << "      1\t\tÇÄÎÐÎÂÜÅ\t" << 150 + HP << " - " << 200 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 15 + SPEED << " - " << 20 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 5 + ATTACK << " - " << 10 + ATTACK << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  1    ÇÎÌÁÈ\t\t";
		colors(6);
		cout << "      1\t\tÇÄÎÐÎÂÜÅ\t" << 100 + HP << " - " << 150 + HP <<  endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 10 + SPEED << " - " << 15 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 15 + ATTACK << " - " << 20 + ATTACK << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  1    ÎÐÊ\t\t";
		colors(6);
		cout << "      1\t\tÇÄÎÐÎÂÜÅ\t" << 200 + HP << " - " << 250 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 5 + SPEED << " - " << 10 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 10 + ATTACK << " - " << 15 + ATTACK << endl << endl;
	}
	colors(10);
	if (r == 1)
	{
		cout << "  2    ÐÅÉÍÄÆÅÐ\t\t";
		colors(6);
		cout << "      2\t\tÇÄÎÐÎÂÜÅ\t" << 125 + HP << " - " << 175 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 17 + SPEED << " - " << 22 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 5 + ATTACK << " - " << 10 + ATTACK << endl
			<< "\t\t\t\t\tÄÀËÜÍÎÑÒÜ\t" << 20 + RANGE << " - " << 25 + RANGE << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  2    ÑÊÅËÅÒ-ËÓ×ÍÈÊ\t";
		colors(6);
		cout << "      2\t\tÇÄÎÐÎÂÜÅ\t" << 75 + HP << " - " << 125 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 12 + SPEED << " - " << 17 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 15 + ATTACK << " - " << 20 + ATTACK << endl
			<< "\t\t\t\t\tÄÀËÜÍÎÑÒÜ\t" << 10 + RANGE << " - " << 15 + RANGE << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  2    ÎÕÎÒÍÈÊ\t\t";
		colors(6);
		cout << "      2\t\tÇÄÎÐÎÂÜÅ\t" << 175 + HP << " - " << 225 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 7 + SPEED << " - " << 12 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 10 + ATTACK << " - " << 15 + ATTACK << endl
			<< "\t\t\t\t\tÄÀËÜÍÎÑÒÜ\t" << 15 + RANGE << " - " << 20 + RANGE << endl << endl;
	}
	colors(10);
	if (r == 1)
	{
		cout << "  3    ÅÄÈÍÎÐÎÃ\t\t";
		colors(6);
		cout << "      3\t\tÇÄÎÐÎÂÜÅ\t" << 200 + HP << " - " << 250 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 15 + SPEED << " - " << 20 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 10 + ATTACK << " - " << 15 + ATTACK << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  3    ÂÑÀÄÍÈÊ ÁÅÇ ÃÎËÎÂÛ";
		colors(6);
		cout << "     3\t\tÇÄÎÐÎÂÜÅ\t" << 150 + HP << " - " << 200 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 10 + SPEED << " - " << 15 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 20 + ATTACK << " - " << 25 + ATTACK << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  3    ÊÅÍÒÀÂÐ\t\t";
		colors(6);
		cout << "      3\t\tÇÄÎÐÎÂÜÅ\t" << 250 + HP << " - " << 300 + HP << endl
			<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 5 + SPEED << " - " << 10 + SPEED << endl
			<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 15 + ATTACK << " - " << 20 + ATTACK << endl << endl;
	}
	colors(10);
	if (r == 1)
	{
		cout << "  4    ÄÐÓÈÄ\t\t";
		colors(6);
		cout << "      1\t\tÇÄÎÐÎÂÜÅ\t" << 50 + HP << " - " << 100 + HP << endl << endl;
	}
	else if (r == 2)
	{
		cout << "  4    ÍÅÊÐÎÌÀÍÒ\t";
		colors(6);
		cout << "      1\t\tÇÄÎÐÎÂÜÅ\t" << 50 + HP << " - " << 100 + HP << endl << endl;
	}
	else if (r == 3)
	{
		cout << "  4    ÁÀÒÐÀÊ\t\t";
		colors(6);
		cout << "      1\t\tÇÄÎÐÎÂÜÅ\t" << 50 + HP << " - " << 100 + HP << endl << endl;
	}
	if (hall_of_heroes == 0)
	{
		colors(10);
		if (r == 1)
		{
			cout << "  5    ÕÐÀÍÈÒÅËÜ ÏÐÈÐÎÄÛ";
			colors(6);
			cout << "      5\t\tÇÄÎÐÎÂÜÅ\t" << 250 + HP << " - " << 375 + HP << endl
				<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 25 + SPEED << " - " << 35 + SPEED << endl
				<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 0 << " - " << 45 + ATTACK << endl
				<< "\t\t\t\t\tÌÀÍÀ\t\t50" << endl << endl;
		}
		else if (r == 2)
		{
			cout << "  5    ÄÐÅÂÍßß ÍÅÆÈÒÜ";
			colors(6);
			cout << "         5\t\tÇÄÎÐÎÂÜÅ\t" << 200 + HP << " - " << 325 + HP << endl
				<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 20 + SPEED << " - " << 30 + SPEED << endl
				<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 0 << " - " << 40 + ATTACK << endl
				<< "\t\t\t\t\tÌÀÍÀ\t\t50" << endl << endl;
		}
		else if (r == 3)
		{
			cout << "  5    ÂÎÆÄÜ\t\t";
			colors(6);
			cout << "      5\t\tÇÄÎÐÎÂÜÅ\t" << 300 + HP << " - " << 425 + HP << endl
				<< "\t\t\t\t\tÑÊÎÐÎÑÒÜ\t" << 20 + SPEED << " - " << 25 + SPEED << endl
				<< "\t\t\t\t\tÀÒÀÊÀ\t\t" << 0 << " - " << 35 + ATTACK << endl
				<< "\t\t\t\t\tÌÀÍÀ\t\t50" << endl << endl;
		}
	}
	colors(10);
	cout << "  0    ÂÛÕÎÄ\t\t";
	colors(6);
	cout << "      -\t\t-\t\t-" << endl << endl;
	colors(14);
	cout << "Êàêîé íîìåð?" << endl;
}

void TextWord::forge(int limit, int max)
{
	system("cls");
	colors(11);
	cout << "\t\t\t×òî õîòèòå ïðîêà÷àòü?\t\t\t  Ëèìèò: " << limit << "/" << max << endl;
	cout << endl << "  íîìåð\t     xàðàêòåðèñòèêà      îòíèìåòñÿ îò ëèìèòà      óâåëè÷èòñÿ íà..." << endl << endl;
	cout << "    1\t";
	colors(3);
	cout << "        ÇÄÎÐÎÂÜÅ\t         -8\t               +20" << endl << endl;
	colors(11);
	cout << "    2\t";
	colors(3);
	cout << "        ÀÒÀÊÀ                    -7\t               +15" << endl << endl;
	colors(11);
	cout << "    3\t";
	colors(3);
	cout << "        ÑÊÎÐÎÑÒÜ                 -6\t               +20" << endl << endl;
	colors(11);
	cout << "    4\t";
	colors(3);
	cout << "        ÄÀËÜÍÎÑÒÜ                -6\t               +20" << endl << endl;
	colors(11);
	cout << "    0\t";
	colors(3);
	cout << "        ÂÛÕÎÄ                     -\t                -" << endl << endl;
}

void TextWord::hall_of_heroes(int limit, int max, vector<HERO> &HERO_V, int r)
{
	system("cls");
	colors(14);
	cout << "\t\t\tÝòî âàøè ãåðîè\t\t\t\t  Ëèìèò: " << limit << "/" << max << endl << endl;
	for (unsigned i = 0; i < (unsigned)HERO_V.size(); i++)
	{
		colors(3);
		if (r == 1)
			cout << "\t\tÕÐÀÍÈÒÅËÜ ÏÐÈÐÎÄÛ ";
		else if (r == 2)
			cout << "\t\tÄÐÅÂÍßß ÍÅÆÈÒÜ ";
		else if (r == 3)
			cout << "\t\tÂÎÆÄÜ ";
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
	cout << "Ïðèâûøåí ëèìèò." << endl;
	_getch();
	_getch();
}

void TextWord::volume()
{
	system("cls");
	colors(10);
	cout << "Ââåäèòå êîë-âî:" << endl;
}

void TextWord::NAME()
{
	colors(14);
	cout << endl << "Ââåäèòå èìÿ Ãåðîÿ(íà àíãëèéñêîì!) - ";
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
	cout << "\t\t\tÕàðàêòåðèñòèêà\t\t\t\t  Ëèìèò: " << limit << "/" << max << endl
		<< "\t\t\t\t\t\t\t       Îáñèäèàí: " << obsidian << endl << endl;
	colors(10);
	if (r == 1)
		cout << "      ÐÀÇßÙÈÉ ÊËÈÍÎÊ" << endl;
	else if (r == 2)
		cout << "      ÇÎÌÁÈ" << endl;
	else if (r == 3)
		cout << "      ÎÐÊ" << endl;
	//cout << "\tSOLDIER" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned) SOLDIER_V.size(); i++)
	{
		if (r == 1)
			cout << "\tÐÀÇßÙÈÉ ÊËÈÍÎÊ ¹ " << i + 1 << " ";
		else if (r == 2)
			cout << "\tÇÎÌÁÈ ¹ " << i + 1 << " \t";
		else if (r == 3)
			cout << "\tÎÐÊ ¹ " << i + 1 << " \t";
		//cout << "\t\tsoldier ¹ " << i + 1 << " ";
		SOLDIER_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ÐÅÉÍÄÆÅÐ" << endl;
	else if (r == 2)
		cout << "      ÑÊÅËÅÒ-ËÓ×ÍÈÊ" << endl;
	else if (r == 3)
		cout << "      ÎÕÎÒÍÈÊ" << endl;
	//cout << "\tARCHER" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
	{
		if (r == 1)
			cout << "\tÐÅÉÍÄÆÅÐ ¹ " << i + 1 << " \t";
		else if (r == 2)
			cout << "\tÑÊÅËÅÒ-ËÓ×ÍÈÊ ¹ " << i + 1 << " ";
		else if (r == 3)
			cout << "\tÎÕÎÒÍÈÊ ¹ " << i + 1 << " \t";
		//cout << "\t\tarcher ¹ " << i + 1 << " ";
		ARCHER_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ÅÄÈÍÎÐÎÃ" << endl;
	else if (r == 2)
		cout << "      ÂÑÀÄÍÈÊ ÁÅÇ ÃÎËÎÂÛ" << endl;
	else if (r == 3)
		cout << "      ÊÅÍÒÀÂÐ" << endl;
	//cout << "\tHORSEMAN" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
	{
		if (r == 1)
			cout << "\tÅÄÈÍÎÐÎÃ ¹ " << i + 1 << " \t";
		else if (r == 2)
			cout << "\tÂÑÀÄÍÈÊ ÁÅÇ ÃÎËÎÂÛ ¹ " << i + 1 << " ";
		else if (r == 3)
			cout << "\tÊÅÍÒÀÂÐ ¹ " << i + 1 << " \t";
		//cout << "\t\thorseman ¹ " << i + 1 << " ";
		HORSEMAN_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ÄÐÓÈÄ" << endl;
	else if (r == 2)
		cout << "      ÍÅÊÐÎÌÀÍÒ" << endl;
	else if (r == 3)
		cout << "      ÁÀÒÐÀÊ" << endl;
	//cout << "\tBUILDER" << endl;
	colors(6);
	for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
	{
		if (r == 1)
			cout << "\tÄÐÓÈÄ ¹ " << i + 1 << " \t";
		else if (r == 2)
			cout << "\tÍÅÊÐÎÌÀÍÒ ¹ " << i + 1 << " \t";
		else if (r == 3)
			cout << "\tÁÀÒÐÀÊ ¹ " << i + 1 << " \t";
		//cout << "\t\tbuilder ¹ " << i + 1 << " ";
		BUILDER_V[i].output();
	}
	colors(10);
	if (r == 1)
		cout << "      ÕÐÀÍÈÒÅËÜ ÏÐÈÐÎÄÛ" << endl;
	else if (r == 2)
		cout << "      ÄÐÅÂÍßß ÍÅÆÈÒÜ" << endl;
	else if (r == 3)
		cout << "      ÂÎÆÄÜ" << endl;
	//cout << "\tHERO" << endl;
	for (unsigned int i = 0; i < (unsigned) HERO_V.size(); i++)
	{
		colors(6);
		if (r == 1)
			cout << "\tÕÐÀÍÈÒÅËÜ ÏÐÈÐÎÄÛ \t";
		else if (r == 2)
			cout << "\tÄÐÅÂÍßß ÍÅÆÈÒÜ \t\t";
		else if (r == 3)
			cout << "\tÂÎÆÄÜ \t";
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
	cout << "\t\t\t×òî ïîñòðîèòü?\t\t\t\t  Ëèìèò: " << limit << "/" << max << endl
		<< "\t\t\t\t\t\t\t       Îáñèäèàí: " << obsidian << endl << endl
		<< "Íîìåð\tÈìÿ\t\tëèìèò ïîñòðîåê\tÕàðàêòåðèñòèêè" << endl << endl;
	colors(6);
	cout << "  1";
	colors(10);
	if (r == 1)
		cout << "    ÄÎÌ\t";
	else if (r == 2)
		cout << "    ÑÊËÅÏ\t";
	else if (r == 3)
		cout << "    ÏÅÙÅÐÀ\t";
	//cout << "    HOUSE\t";
	colors(6);
	cout << "      \t      " << lim_house << "\t\tëèìèò + 5" << endl << endl;
	cout << "  2";
	colors(10);
	if (r == 1)
		cout << "    ÔÅÐÌÀ\t\t";
	else if (r == 2)
		cout << "    ÊËÀÄÁÈÙÅ\t\t";
	else if (r == 3)
		cout << "    ÆÅÐÒÂÅÍÍÛÉ ÀËÒÀÐÜ";
	//cout << "    FARM\t";
	colors(6);
	cout << "      " << lim_farm << "\t\tëèìèò + 10" << endl << endl;
	cout << "  3";
	colors(10);
	if (r == 1)
		cout << "    ÊÀÇÀÐÌÀ\t";
	else if (r == 2)
		cout << "    ÍÈÊÐÎÏÎËÜ";
	else if (r == 3)
		cout << "    ÁÀÐÀÊ\t";
	//cout << "    CASERN\t";
	colors(6);
	cout << "\t      " << lim_casern << "\t\tëèìèò + 15" << endl << endl;
	cout << "  4";
	colors(10);
	cout << "    ÊÓÇÍÈÖÀ\t";
	colors(6);
	cout << "      \t      " << forge << "\t\tÏðîêà÷êà ïåðñîíàæåé." << endl << endl;
	cout << "  5";
	colors(10);
	if (r == 1)
		cout << "    ÇÀË ÃÅÐÎÅÂ\t";
	else if (r == 2)
		cout << "    ÄÐÅÂÍßß ÃÐÎÁÍÈÖÀ\t";
	else if (r == 3)
		cout << "    ÇÀË ÂÎÆÄÅÉ\t";
	//cout << "    HALL OF HEROES\t";
	colors(6);
	cout << "      " << hall_of_heroes << "\t\tÂîçìîæíîñòü íàíèìàòü ãåðîåâ." << endl << endl;
	cout << "  6";
	colors(10);
	cout << "    ÕÐÀÌ\t";
	colors(6);
	cout << "              " << shrine << "\t\tÂîçìîæíîñòü ëå÷èòü þíèòîâ." << endl << endl;
	cout << "  0";
	colors(10);
	cout << "    ÂÛÕÎÄ\t";
	colors(6);
	cout << "      " << "    " << "\t\tÂåðíóòüñÿ â ïîñåëåíèå." << endl << endl;
	//Enter();
}

void TextWord::Error_limit_exten()
{
	colors(4);
	cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\tÏðåâûøåí ëèìèò ïîñòðîéêè." << endl;
	_getch();
}

void TextWord::DEFEAT()
{
	system("cls");
	colors(10);
	char s = '¤';
	string ss = "¤¤";
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
	char s = '¤';
	string ss = "¤¤";
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
	cout << "\t\t\t\tÂàøè ïðîòèâíèêè"  << endl << endl
		<< "\tÈìÿ" << endl << endl;
	colors(10);
	cout << "\tÃÎÁËÈÍ\t" << GOBLIN_V.size() << " øò";
	cout << endl << endl;
	cout << "\tÃÎÁËÈÍ ËÓ×ÍÈÊ\t" << GOBLIN_ARCHER_V.size() << " øò";
	cout << endl << endl;
	cout << "\tÃÎÁËÈÍ ÍÀÅÇÄÍÈÊ\t" << GOBLIN_HORSEMAN_V.size() << " øò";
	cout << endl << endl;
	
	//Enter();
	cout << "\t\t\t\t   Ïðîäîëæèòü?" << endl << endl
		<< "\t\t\t1 - Äà.\t\t\t2 - Íåò." << endl << endl;
}

void TextWord::SRINE()
{
	system("cls");
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
	cout << endl << endl << endl << endl << endl << endl << endl << endl
		<< "\tÒåïåðü ïîñëå ñðàæåíèé HP è MANA ó âàøèõ ãåðîåâ áóäåò âîñòàíàâëèâàòüñÿ." << endl;
	_getch();
}

void TextWord::menu_race()
{
	system("cls");
	colors(14);
	cout << "\t\t\t\tÇà êàêóþ ðàñó áóäèòå èãðàòü?" << endl << endl
		<< "\t\t\t1 - Ýëüôû" << endl << endl
		<< "\t\t\t2 - Íåæèòü" << endl << endl
		<< "\t\t\t3 - Îðêè" << endl << endl;
	colors(6);
}

void TextWord::hunting_menu(bool lvl_1, bool lvl_2, bool lvl_3, bool lvl_4, bool lvl_5, bool lvl_6, bool lvl_7,
	bool lvl_8, bool lvl_9, bool lvl_10)
{
	system("cls");
	colors(14);
	cout << "\t\t\t\t  Êàêîé óðîâåíü?" << endl << endl;
	colors(10);
	cout << "\t1 - óðîâåíü.";
	if (lvl_1 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << "\t\t2 - óðîâåíü.";
	if (lvl_2 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << endl << endl << "\t3 - óðîâåíü.";
	if (lvl_3 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << "\t\t4 - óðîâåíü.";
	if (lvl_4 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << endl << endl << "\t5 - óðîâåíü.";
	if (lvl_5 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << "\t\t6 - óðîâåíü.";
	if (lvl_6 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << endl << endl << "\t7 - óðîâåíü.";
	if (lvl_7 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << "\t\t8 - óðîâåíü.";
	if (lvl_8 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << endl << endl << "\t9 - óðîâåíü.";
	if (lvl_9 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << "\t\t10 - óðîâåíü.";
	if (lvl_10 == false)
	{
		colors(3);
		cout << " ïðîéäåíî.\t";
	}
	else
	{
		colors(4);
		cout << " íå ïðîéäåíî.";
	}
	colors(10);
	cout << endl << endl << "\t\t\t\t   0 - âûõîä." << endl << endl;
}

void TextWord::Error_obsidian()
{
	colors(4);
	cout << endl << endl << endl << endl << endl << endl << endl << "\t\t\t\tÍå õâàòàåò ðåñóðñîâ." << endl;
	_getch();
	_getch();
}
