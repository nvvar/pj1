#pragma once

class Car
{
private:
	// �ʿ��Ѱ� ����
	char* _Name;
	int _Wheel;
	double _Oil;
	// �����ӵ� �ִ�ӵ�
	double _currentSpeed;
	double _MaxSpeed;
	Size _Size;

	// �� = �⸧�� �ӵ��� �������� ũ��(����,����) 
	// _ �� �ʼ����� ��� / �۾�ü �Լ��� �� ����
	// �ϰ��� ��������̸� �Լ��̸�
public:
	// class ������(��ó��) �Ҹ���(���ﶧ)

	Car() // ������
	{
		// �׳� ������ Car ����ҷ��µ� ���� ���� = ����
		// ó���� ���鶧 ����������� �ʱ�ȭ�� ��������
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