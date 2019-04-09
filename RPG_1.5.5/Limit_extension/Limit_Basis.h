#pragma once
#include "../Basis/BASIS.h"
#include "HOUSE.h"
#include "FARM.h"
#include "CASERN.h"
#include "../Basis/TextWord.h"
#include "FORGE.h"
#include <vector>
#include "../Units/SOLDIER.h"
#include "../Units/HORSEMAN.h"
#include "../Units/ARCHER.h"
#include "../Units/HERO.h"
#include "../Units/BUILDER.h"
#include "HALL_OF_HEROES.h"
#include "../Basis/SHRINE.h"
using namespace std;
class BASIS;

class Limit_Basis
{
public:
	~Limit_Basis	();
	Limit_Basis		(BASIS * par);

	void			begin			(int limit, int &max, vector<BUILDER> &BUILDER_V, int r, int& obsidian);
	void			clear			();

	void			menu_0			(int &limit, int &max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
									vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__);
	void			HP				(int &limit, int &max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
									vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__);
	void			ATTACK			(int &limit, int &max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
									vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__);
	void			SPEED			(int &limit, int &max, vector<SOLDIER> &SOLDIER_V, vector<HORSEMAN> &HORSEMAN_V,
									vector<ARCHER> &ARCHER_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V, int &max__);
	void			RANGE			(int &limit, int &max, vector<ARCHER> &ARCHER_V, int &max__);


	void			menu_1			(int &limit, int &max, vector<HERO> & HERO_V, int r);

	void			forge_save_HP		(vector<SOLDIER> &SOLDIER_V);
	void			forge_save_HP		(vector<HORSEMAN> &HORSEMAN_V);
	void			forge_save_HP		(vector<ARCHER> &ARCHER_V);
	void			forge_save_HP		(vector<HERO> &HERO_V);
	void			forge_save_HP		(vector<BUILDER> &BUILDER_V);

	void			forge_save_ATTACK	(vector<SOLDIER> &SOLDIER_V);
	void			forge_save_ATTACK	(vector<HORSEMAN> &HORSEMAN_V);
	void			forge_save_ATTACK	(vector<ARCHER> &ARCHER_V);
	void			forge_save_ATTACK	(vector<HERO> &HERO_V);

	void			forge_save_SPEED	(vector<SOLDIER> &SOLDIER_V);
	void			forge_save_SPEED	(vector<HORSEMAN> &HORSEMAN_V);
	void			forge_save_SPEED	(vector<ARCHER> &ARCHER_V);
	void			forge_save_SPEED	(vector<HERO> &HERO_V);

	void			forge_save_RANGE	(vector<ARCHER> & ARCHER_V);
	void			forge_save_RANGE	(vector<HERO> & HERO_V);
	BASIS*			basis;
	TextWord		text;
		

	vector<HOUSE>			HOUSE_V;
	vector<FARM>			FARM_V;
	vector<CASERN>			CASERN_V;
	vector<FORGE>			FORGE_V;
	vector<HALL_OF_HEROES>	HALL_OF_HEROES_V;
	vector<SHRINE>			SHRINE_V;

	int				lim_house;
	int				lim_farm;
	int				lim_casern;
	int				forge;
	int				hall_of_heroes;
	int				shrine;

	int				save_forge_HP,
					save_forge_ATTACK,
					save_forge_SPEED,
					save_forge_RANGE;

};

