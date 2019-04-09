#pragma once
#include "TextWord.h"
#include "../Units/SOLDIER.h"
#include "../Units/ARCHER.h"
#include "../Units/HORSEMAN.h"
#include "../Units/HERO.h"
#include "../Units/BUILDER.h"
#include <vector>
#include <iostream>
#include <Windows.h>
/*
* короче, ты хотела дописать библиотеки юнитов, чтоб в ф-ии regen востанавливать им HP после сражения и ману героям
* а так же у каждых юнитов создать переменные где хранится их максимум по HP и мане
*/
using namespace std;
class SHRINE
{
public:
	SHRINE();
	~SHRINE();
	void		begin		();

	TextWord	text;
	void		regen(vector<SOLDIER> &SOLDIER_V, vector<ARCHER> &ARCHER_V, vector<HORSEMAN> &HORSEMAN_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V);
	const HANDLE		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
};

