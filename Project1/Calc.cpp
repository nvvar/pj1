#include "Calc.h"
#include <iostream>
#include "UI.h"

using namespace std;
bool Compar(char ValueChar);
Calc::Calc()
{

	_isError = false;
}

Calc::~Calc()
{
}

bool Calc::IsError() { return _isError; }

void Calc::InputSize()
{
	cin >> _ValueSize;

}

void Calc::InputValue()
{
	for (int i = 0; i < _ValueSize; i++)
	{
		cin >> _Value[i];
		if (i < _ValueSize - 1)
		{
			cin >> _ValueChar[i];
			if (Compar(_ValueChar[i]))
				_isError = true;
		}
	}
}

bool Compar(char ValueChar)
{
	if (ValueChar == '+') return false;
	else if (ValueChar == '-') return false;
	else if (ValueChar == '*') return false;
	else if (ValueChar == '/') return false;
	else if (ValueChar == '%') return false;
	return true;
}

void Calc::Calculation()
{
	int Result = _Value[0];

	for (int i = 0; i < _ValueSize - 1; i++)
	{
		if (_ValueChar[i] == '+')
			Result += _Value[i + 1];
		else if (_ValueChar[i] == '-')
			Result -= _Value[i + 1];
		else if (_ValueChar[i] == '*')
			Result *= _Value[i + 1];
		else if (_ValueChar[i] == '/')
			Result /= _Value[i + 1];
		else if (_ValueChar[i] == '%')
			Result %= _Value[i + 1];
	}
	cout << "´ä : " << Result << endl;
}