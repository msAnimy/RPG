#pragma once
#include "HORSEMAN.h"
#include <string>
#include <iostream>
using namespace std;
class HERO:public HORSEMAN
{
public:
	HERO(int i);
	HERO();
	~HERO();
	HERO(string &NAME, int i, int r);

	string		name;

	int			mana;
	int			XP;
	int			LVL;
	int			range;
	int			regen;
	int			ID;

	void		output			();
	void		LVL_UP			(int xp);

private:
	void		LVL_1			(int xp);
	void		LVL_2			(int xp);
	void		LVL_3			(int xp);
	void		LVL_4			(int xp);
	void		LVL_5			(int xp);
	void		LVL_6			(int xp);
	void		LVL_7			(int xp);
	void		LVL_8			(int xp);
	void		LVL_9			(int xp);
	void		LVL_10			(int xp);
};

