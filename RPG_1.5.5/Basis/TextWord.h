#pragma once
#include<conio.h>
#include<iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include "../Units/BUILDER.h"
#include "../Units/HERO.h"
#include "../Units/ARCHER.h"
#include "../Units/HORSEMAN.h"
#include "../Units/SOLDIER.h"
#include "../Units/NPC.h"
#include "../Limit_extension/HOUSE.h"
#include"../Limit_extension/FARM.h"
#include "../Limit_extension/CASERN.h"
#include "../Hunting/GOBLIN.h"
#include "../Hunting/GOBLIN_HORSEMAN.h"
#include "../Hunting/GOBLIN_ARCHER.h"
using namespace std;
class TextWord
{
public:
	TextWord();
	~TextWord();
	const HANDLE		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	void				Main_menu				();
	void				Error_format			(string &n);
	void				Enter					();
	void				Menu_exit				();
	void				output_unit				(int limit, vector<NPC> &NPC_V, vector<SOLDIER> &SOLDIER_V,
												vector<HORSEMAN> &HORSEMAN_V, vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, int max,
												vector<BUILDER> &BUILDER_V, int r, int obsidian);
	void				output_unit_PVP			(vector<SOLDIER> &SOLDIER_V,
												vector<HORSEMAN> &HORSEMAN_V, vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V,
												vector<BUILDER> &BUILDER_V);
	void				inout					(int forge, int hall_of_heroes, int shrine, int r,int limit, int max__);
	void				sack					(int limit, int max, int HOH, int r, int obsidian);
	void				hire					(int limit, int max, int hall_of_heroes, int r, int HP, int ATTACK, int SPEED, int RANGE, int obsidian);
	void				forge					(int limit, int max);
	void				hall_of_heroes			(int limit, int max, vector<HERO> &HERO_V, int r);
	void				Error_limit				();
	void				volume					();
	void				NAME					();
	void				colors					(int n);
	void				character				(int limit, vector<NPC> &NPC_V, vector<SOLDIER> &SOLDIER_V,
												vector<HORSEMAN> &HORSEMAN_V, vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, int max,
												vector<BUILDER> &BUILDER_V, int r, int obsidian);

	void				limit_exten				(int limit, int max, int lim_house, int lim_farm, int lim_casern, int forge, int hall_of_heroes, int shrine, int r, int obsidian);
	void				Error_limit_exten		();

	void				DEFEAT					();
	void				VICTORY					();

	void				HUNTING					(vector<GOBLIN> &GOBLIN_V, vector<GOBLIN_HORSEMAN> & GOBLIN_HORSEMAN_V, vector<GOBLIN_ARCHER> & GOBLIN_ARCHER_V);

	void				SRINE					();

	void				menu_race				();

	void				hunting_menu			(bool lvl_1, bool lvl_2, bool lvl_3, bool lvl_4, bool lvl_5, bool lvl_6, bool lvl_7,
												bool lvl_8, bool lvl_9, bool lvl_10);

	void Error_obsidian();
};

