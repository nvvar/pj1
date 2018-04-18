#include "UI.h"
#include <iostream>

using namespace std;
UI::UI()
{
}

UI::~UI()
{
}

void UI::PrintSetSize()
{
	cout << "  몇개의 숫자를 연산할지 적으시오." << endl
		<< "  예) 만들고싶은게 1+2 이 일시에 2를 입력. " << endl;
}

void UI::PrintSetValue()
{
	cout << "연산할 식을 적으시오.  ";
}

void UI::Exit()
{
	cout << "연산기호가 잘못입력되었습니다. " << endl;
}

void UI::Result()
{
}