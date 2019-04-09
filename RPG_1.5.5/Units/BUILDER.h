#pragma once
#include "SOLDIER.h"
#include <iostream>
using namespace std;
class BUILDER:public SOLDIER
{
public:
	BUILDER();
	~BUILDER();

	void output();
};

