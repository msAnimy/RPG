#pragma once
#include "HORSEMAN.h"
#include <iostream>
using namespace std;
class ARCHER: public HORSEMAN
{
public:
	ARCHER(int r);
	ARCHER();
	~ARCHER();
	void output();
	int range;
};

