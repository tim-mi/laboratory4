// lab4_1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "n="; cin >> n;//���������� ��������� �������
	p = (int*)malloc(n*sizeof(int));//��������������� ��� � �������� ������ ��� ������� ��������� � ������� ����������
	for (i = 0; i < n; i++)//��������� ������ � ������� �� ������
	{
		p[i] = rand() % 100;
		cout << p[i] << " ";
	}
	cout << endl;
	max = p[0];
	min = p[0];
	for (i = 0; i < n; i++)//������� ������������ � ����������� ������� �������
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
				p[i] = 0;// �������� �������� �����
			}
		else sum = sum + p[i];//����� ������
		cout << p[i] << " ";
	}
		cout << endl;
		cout << "mult= " << mult << endl;//������������ �������� �����
		cout << endl << "sum= " << sum;
	free(p);
	system("pause");
}
