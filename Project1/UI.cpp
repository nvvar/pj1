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
	cout << "  ��� ���ڸ� �������� �����ÿ�." << endl
		<< "  ��) ���������� 1+2 �� �Ͻÿ� 2�� �Է�. " << endl;
}

void UI::PrintSetValue()
{
	cout << "������ ���� �����ÿ�.  ";
}

void UI::Exit()
{
	cout << "�����ȣ�� �߸��ԷµǾ����ϴ�. " << endl;
}

void UI::Result()
{
}