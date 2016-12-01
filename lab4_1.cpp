// lab4_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int *p;
	int n, i, sum = 0, max, min, mult=1;
	cout << "n="; cin >> n;//количество элементов массива
	p = (int*)malloc(n*sizeof(int));//преобразовываем тип и выделяем память для каждого указателя в массиве указателей
	for (i = 0; i < n; i++)//заполняем массив и выводим на печать
	{
		p[i] = rand() % 100;
		cout << p[i] << " ";
	}
	cout << endl;
	max = p[0];
	min = p[0];
	for (i = 0; i < n; i++)//находим максимальный и минимальный элемент массива
	{
		if (p[i] < min) min = p[i];
		if (p[i] > max) max = p[i];
	}
	cout << "min= " << min << endl;
	cout << "max= " << max << endl;
		for (i = 0; i < n; i++)
		{
			if (p[i] % 2 != 0)
			{
				mult = mult*p[i];
				p[i] = 0;// обнуляем нечетные числа
			}
		else sum = sum + p[i];//сумма четных
		cout << p[i] << " ";
	}
		cout << endl;
		cout << "mult= " << mult << endl;//произведение нечетных чисел
		cout << endl << "sum= " << sum;
	free(p);
	system("pause");
}
