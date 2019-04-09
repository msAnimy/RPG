#include "SHRINE.h"



SHRINE::SHRINE()
{
}


SHRINE::~SHRINE()
{
}

void SHRINE::begin()
{
	text.SRINE();

}

void SHRINE::regen(vector<SOLDIER> &SOLDIER_V, vector<ARCHER> &ARCHER_V, vector<HORSEMAN> &HORSEMAN_V, vector<HERO> &HERO_V, vector<BUILDER> &BUILDER_V)
{
	/*for (unsigned int i = 0; i < (unsigned)SOLDIER_V.size(); i++)
		SOLDIER_V[i].HP = SOLDIER_V[i].HP_regen;
	for (unsigned int i = 0; i < (unsigned)ARCHER_V.size(); i++)
		ARCHER_V[i].HP = ARCHER_V[i].HP_regen;
	for (unsigned int i = 0; i < (unsigned)HORSEMAN_V.size(); i++)
		HORSEMAN_V[i].HP = HORSEMAN_V[i].HP_regen;*/
	for (unsigned int i = 0; i < (unsigned)HERO_V.size(); i++)
		HERO_V[i].HP = HERO_V[i].HP_regen;
	/*for (unsigned int i = 0; i < (unsigned)BUILDER_V.size(); i++)
		BUILDER_V[i].HP = BUILDER_V[i].HP_regen;*/
}
