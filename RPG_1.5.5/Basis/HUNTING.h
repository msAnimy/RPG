#pragma once
#include <iostream>
#include "Interface.h"
#include "TextWord.h"
#include "../Hunting/GOBLIN.h"
#include "../Hunting/GOBLIN_HORSEMAN.h"
#include "../Hunting/GOBLIN_ARCHER.h"
#include <vector>

using namespace std;

class Interface;

class HUNTING
{
public:
	HUNTING(Interface * parent);
	~HUNTING();

	Interface *		in;
	TextWord		text;

	void			begin		(vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> & HORSEMAN_V, vector<ARCHER> & ARCHER_V,
								vector<BUILDER> &BUILDER_V, vector<HERO> & HERO_V, int & limit, int & max, int & hero_soldier, int & hero_archer, int & hero_mage, int r, int &obsidian);
	void			creation	(int goblin, int goblin_archer, int goblin_horseman);
	void			clear		();
	void			PVP			(vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> & HORSEMAN_V, vector<ARCHER> & ARCHER_V,
								vector<BUILDER> &BUILDER_V, vector<HERO> & HERO_V, int & limit, int & max, int & hero_soldier, int & hero_archer, int & hero_mage, int r, int N, int &obsidian);

	void			menu		(int & N);

	bool menu_exit();

	void			obsidian_drop(int & obsidian, int &N);
	void			clear_drop	();

	vector<GOBLIN>				GOBLIN_V;
	vector<GOBLIN_HORSEMAN>		GOBLIN_HORSEMAN_V;
	vector<GOBLIN_ARCHER>		GOBLIN_ARCHER_V;

	bool lvl_1, lvl_2, lvl_3, lvl_4, lvl_5, lvl_6, lvl_7, lvl_8, lvl_9, lvl_10;
	int drop_counter;
	bool lvl_bonus_5, lvl_bonus_10;
};

