#include <iostream>
#include <string>
#include "Calc.h"
#include "UI.h"
using namespace std;

int main()
{
	Calc calc;
	UI ui;
	
	ui.PrintSetSize();
	calc.InputSize();

	ui.PrintSetValue();
	calc.InputValue();

	if (calc.IsError())
	{
		ui.Exit();
		return 0;
	}

	ui.Result();
	calc.Calculation();
}