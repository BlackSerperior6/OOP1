#include "Progression.h"

int main()
{
	setlocale(LC_ALL, "RUS");

	Progression progression = make_progression(); //создаем объект класса прогрессии

	progression.Show(); //печатаем прогрессию

	cout << endl;

	int j;

	do
	{
		cout << "Введите j:" << endl;;
		cin >> j; //получаем номер элемента прогрессии, который надо вывести
	}
	while (j < 0);

	//Выводим j-ый элемент
	cout << "Элемент прогресси по заданому номеру: " << progression.GetJElementOfProgression(j) << endl;
}
