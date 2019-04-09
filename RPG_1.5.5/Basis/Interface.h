#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include <stdio.h>
#include "TextWord.h"
#include "BASIS.h"
#include "../Limit_extension/FORGE.h"
#include "HUNTING.h"
#include "SHRINE.h"
using namespace std;
class BASIS;
class HUNTING;
class Interface
{
public:
	Interface();
	~Interface();

	void			menu_0			();
	void			check_1			(string &str);
	void			check_2			(int l, int r, int &N, string &n);
	void			menu_2			(int &max__, bool &ok, int r);
	void			check_4			(string &number, int limit, int max, int n, int i);
	void			cin_			(string & n, int & N, int l, int r);
	void			NAME			(string &NAME);
	void			menu_race		();
	int				check_3			(string & num, int size);


	char *			us;

	BASIS*			basis;
	TextWord		text;
	FORGE			forge;
	HUNTING	*		hunting;
	SHRINE  		Shrine;
	
private:
	
	const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
};

