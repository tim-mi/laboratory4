#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void main()
{
	int *p;
	int n, i, sum = 0, max, min, mult = 1;
	cout << "n="; cin >> n;
	p = (int*)malloc(n*sizeof(int));//преобразовываем тип и выделяем память для каждого указателя в массиве указателей
	for (i = 0; i < n; i++)
	{
		p[i] = rand() % 101;
		cout << p[i] << " ";
	}
	cout << endl;
	max = p[0];
	min = p[0];
	for (i = 0; i < n; i++)
	{
		if (p[i] < min) min = p[i];
		if (p[i] > max) max = p[i];
	}
	cout << "min= " << min << endl;
	cout << "max= " << max << endl;
	for (i = 0; i < n; i++)	if (p[i] % 2 != 0) {
		sum = sum + p[i];
		mult = mult*p[i];
	}
	cout << endl << "mult= " << mult;
	cout << endl << "sum= " << sum;
	cout << endl;
	free(p);
	system("pause");
}
