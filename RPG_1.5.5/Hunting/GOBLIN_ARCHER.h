#pragma once
#include "GOBLIN.h"
#include <iostream>
using namespace std;

class GOBLIN_ARCHER:public GOBLIN
{
public:
	GOBLIN_ARCHER();
	~GOBLIN_ARCHER();
	int range;

	void output();
};

