#pragma once
#include "SOLDIER.h"
#include <iostream>
using namespace std;
class HORSEMAN:public SOLDIER
{
public:
	HORSEMAN(int r);
	HORSEMAN();
	~HORSEMAN();
	void output();
};

