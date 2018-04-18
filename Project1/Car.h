#pragma once

class Car
{
private:
	// 필요한게 뭘까
	char* _Name;
	int _Wheel;
	double _Oil;
	// 기존속도 최대속도
	double _currentSpeed;
	double _MaxSpeed;
	Size _Size;

	// 차 = 기름량 속도량 바퀴갯수 크기(가로,세로) 
	// _ 는 필수적인 약속 / 글씨체 함수나 줄 정리
	// 일관성 멤버변수이름 함수이름
public:
	// class 생성자(맨처음) 소멸자(지울때)

	Car() // 생성자
	{
		// 그냥 쌩으로 Car 사용할려는데 값이 없어 = 에러
		// 처음에 만들때 멤버변수들을 초기화를 시켜주자
		_Wheel = 4;
		_Oil = 3.141592;
		_currentSpeed = 0;
		_MaxSpeed = 240;
		_Size.x = 10;
		_Size.y = 20;
	}

	~Car()
	{

	}

	void SetName(char* name) { _Name = name; }
	char* GetName() { return _Name; }

	void SetWheel(int Wheel) { _Wheel = Wheel; }
	int GetWheel() { return _Wheel; }

	void SetOil(double oil) { _Oil = oil; }
	double GetOil() { return _Oil; }

	void SetSpeed(double speed) { _currentSpeed = speed; }
	double GetSpeed() { return _currentSpeed; }

	void SetMaxSpeed(double speed) { _MaxSpeed = speed; }
	double GetMaxSpeed() { return _MaxSpeed; }

	void SetSize(float x, float y) { _Size.x = x; _Size.y = y; }
	Size GetSize() { return _Size; }
};

typedef struct Size
{
	int x;
	int y;
};