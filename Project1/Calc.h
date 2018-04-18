#pragma once
class UI;

class Calc
{ // 주 h 종 cpp
	// h 선언 종 정의 
public:
	Calc(); // 생성자
	~Calc(); // 소멸자

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

