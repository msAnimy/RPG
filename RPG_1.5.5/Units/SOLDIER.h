#pragma once
#include "NPC.h"
using namespace std;
class SOLDIER:public NPC
{
public:
	SOLDIER(int r);
	SOLDIER();
	~SOLDIER();
	void output();
	int speed;
	int attack;
	int HP_regen;
};

