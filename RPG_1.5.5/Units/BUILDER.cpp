#include "BUILDER.h"



BUILDER::BUILDER()
{
	HP = rand() % 50 + 50;
	HP_regen = HP;
}


BUILDER::~BUILDER()
{
}

void BUILDER::output()
{
	cout << "\tHP\t" << HP << endl << endl << endl;
}
