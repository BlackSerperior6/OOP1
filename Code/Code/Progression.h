#pragma once

#include <iostream>
using namespace std;

class Progression //����� ����������
{
public:

	double GetJElementOfProgression(int j) //����� ��������� ��������� ����������
	{
		if (j == 0) //���������� ������� �������, ���� j = 0
			return first;

		return first * Power(second, j); //����� ���������� j-�� �������
	}

	void Read() //����� ����� ���������� � ����������
	{
		cout << "������� ������� ���� ����������:" << endl;

		double first;

		cin >> first; //�������� ������� �������

		int r;

		do
		{
			cout << "������� r:" << endl;
			cin >> r; //�������� r

		} 
		while (r < 0);

		Init(first, r); //�������������� ���������
	}

	void Show()
	{
		cout << "������� �������: " << first << ", ���������: " << second << endl;
	}

private:

	double first; //������� ������� ���� double
	unsigned int second; //��������������� ���������

	void setFirst(double First) //������� ������� ��������
	{
		first = First;
	}

	void setSecond(int Second) //������ ������� 
	{
		if (Second == 0)
			Second = 1;

		second = Second;
	}

	int Power(int number, int power) //����� ���������� � �������
	{
		int result = number; //���������� ����������

		for (int i = 1; i < power; i++) //������� ���� ��� �������� �� ����� ���������
			result *= number;

		return result; //���������� ���
	}

	void Init(double first, unsigned int second) //����� ������������� ����������
	{
		setFirst(first); //������ ������ �������
		setSecond(second); //������ ������
	}
};

Progression make_progression() //����� �������� ����� ����������
{
	Progression result; //����������, ������� ������ �����

	result.Read(); //����� ������ ��� ����� ������� � ����������

	return result; //���������� ���������
}
