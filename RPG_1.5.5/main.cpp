
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <clocale>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Basis/Interface.h"
using namespace std;


int main()
{
	setlocale(0, "rus");
	srand(time_t(0));
	system("color 0F");
	Interface In;
	In.menu_0();

};