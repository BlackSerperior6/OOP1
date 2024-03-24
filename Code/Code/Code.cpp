#include "Progression.h"

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Введите первый член прогрессии:" << endl;

	double first;

	cin >> first;

	int r;

	do
	{
		cout << "Введите r:" << endl;
		cin >> r;

	} 
	while (r < 0);

	Progression* progression = new Progression(first, r);

	int j;

	do
	{
		cout << "Введите j:" << endl;;
		cin >> j;
	}
	while (j < 0);

	cout << "Элемент прогресси по заданому номеру: " << progression->GetJElementOfProgression(j) << endl;

	delete progression;
}
