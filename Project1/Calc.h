#pragma once
class UI;

class Calc
{ // �� h �� cpp
	// h ���� �� ���� 
public:
	Calc(); // ������
	~Calc(); // �Ҹ���

	void Calculation();
	void InputSize();
	void InputValue();

	bool IsError();

private:

	int _Value[10];
	char _ValueChar[9];
	int _ValueSize;

	bool _isError;
};

