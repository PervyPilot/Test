// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Задание 4. Пользователь вводит прибыль фирмы за год (12 месяцев). Необходимо определить месяц, 
// в котором прибыль была максимальна и месяц, в котором прибыль была минимальна.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 12;
	double payday[SIZE];
	double maxpayday = 0;
	double minpayday = 99999999999999999;
	int  maxindex = -1;
	int  minindex = -1;
	for (int i = 0; i < SIZE; i++)
	{
        cout << "Введите прибыль за " << i + 1 << " месяц: "; cin >> payday[i];
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		//cout << "Введите прибыль за " << i + 1 << " месяц: "; cin >> payday[i];
		if (payday[i] > maxpayday) 
		{
			maxpayday = payday[i]; 
			maxindex = i+1;
		}
		if (payday[i] < minpayday )
		{
			minpayday = payday[i];
			minindex = i+1;
		}
	}
	cout << "Максимальная прибыль была " << maxindex << " в месяце"  << endl;
	cout << "Миниимальная прибыль была " << minindex << " в месяце" << endl;

}
