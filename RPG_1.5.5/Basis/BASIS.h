#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "../Units/BUILDER.h"
#include "../Units/HERO.h"
#include "../Units/ARCHER.h"
#include "../Units/HORSEMAN.h"
#include "../Units/SOLDIER.h"
#include "../Units/NPC.h"
#include "../Limit_extension/Limit_Basis.h"
#include"Interface.h"
#include "TextWord.h"
#include <string>
#include "SHRINE.h"
//#include "../Units/HERO/HERO_SOLDIER.h"
using namespace std;
class Interface;
class Limit_Basis;

class BASIS
{
public:
	BASIS(Interface * parent);
	~BASIS();

	void				begin				(int r);
	void				Clear				(int r);


	void				sack				(int r);
	void				sack_SOLDIER		();
	void				sack_HORSEMAN		();
	void				sack_ARCHER			();
	void				sack_HERO			();

	void				hire				(int r);
	void				hire_SOLDIER		(int r);
	void				hire_HORSEMAN		(int r);
	void				hire_ARCHER			(int r);
	void				hire_HERO			(int r);
	void				hire_BUILDER		();

	void				limit_extension		(int r);

	void				PVP					();



	int					max;
	int					limit;
	int					max__;
	int					obsidian;
	int					HERO_SOLDIER;
	int					HERO_ARCHER;
	int					HERO_MAGE;
	

	char       *		us;

	vector<NPC>			NPC_V;
	vector<SOLDIER>		SOLDIER_V;
	vector<HORSEMAN>	HORSEMAN_V;
	vector<ARCHER>		ARCHER_V;
	vector<HERO>		HERO_V;
	vector<BUILDER>		BUILDER_V;

	TextWord			text;
	Interface	*		in;
	Limit_Basis *		lim_b;
	SHRINE				shrine;
};

