#pragma once

#include <iostream>
using namespace std;

class Progression //Класс прогрессии
{
public:

	double GetJElementOfProgression(int j) //метод получения элементам прогрессии
	{
		if (j == 0) //возвращаем нулевой элемент, если j = 0
			return first;

		return first * Power(second, j); //иначе возвращаем j-ый элемент
	}

	void Read() //Метод ввода прогрессии с клавиатуры
	{
		cout << "Введите нулевой член прогрессии:" << endl;

		double first;

		cin >> first; //Получаем нулевой элемент

		int r;

		do
		{
			cout << "Введите r:" << endl;
			cin >> r; //получаем r

		} 
		while (r < 0);

		Init(first, r); //Инициализируем структуру
	}

	void Show()
	{
		cout << "Нулевой элемент: " << first << ", множитель: " << second << endl;
	}

private:

	double first; //нулевой элемент типа double
	unsigned int second; //неотрицательный множитель

	void setFirst(double First) //сеттера первого элемента
	{
		first = First;
	}

	void setSecond(int Second) //сеттер второго 
	{
		if (Second == 0)
			Second = 1;

		second = Second;
	}

	int Power(int number, int power) //метод возведения в степень
	{
		int result = number; //переменная результата

		for (int i = 1; i < power; i++) //сколько надо раз умножаем на число результат
			result *= number;

		return result; //возвращаем его
	}

	void Init(double first, unsigned int second) //Метод инициализации прогрессии
	{
		setFirst(first); //Задаем первый элемент
		setSecond(second); //Задаем второй
	}
};

Progression make_progression() //Метод создания новой прогрессии
{
	Progression result; //Прогрессия, которую вернет метод

	result.Read(); //Вызов метода для ввода данныйх с клавиатуры

	return result; //Возвращаем результат
}
