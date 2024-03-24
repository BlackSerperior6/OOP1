#pragma once

#include <iostream>
using namespace std;

class Progression
{
public:

	Progression(double zeroElement = 1, unsigned int r = 1)
	{
		setFirst(zeroElement);
		setSecond(r);
	};

	double GetJElementOfProgression(int j)
	{
		if (j == 0)
			return first;

		return first * Power(second, j);
	}

private:

	double first;
	unsigned int second;

	void setFirst(double First)
	{
		first = First;
	}

	void setSecond(int Second) 
	{
		if (Second == 0)
			Second = 1;

		second = Second;
	}

	int Power(int number, int power)
	{
		int result = number;

		for (int i = 1; i < power; i++)
			result *= number;

		return result;
	}
};
