// Lab 4b.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

struct Team // ��������� �������
{
	char name_team[64]; // �������� �������
};

struct Player  // ��������� �����
{
	Team tm; // �������� �������
	char fi[128]; // ��
	char pos[64]; // ������� pg, sg, ,sf,pf,c 
	unsigned int vozr;  // �������
};


int main()
{
	setlocale(LC_ALL, "Russian");
	Player *pP; // ��������� �� ������ ��������
	unsigned int n; // ����� ��������� �������
	printf_s("n=");
	scanf_s("%d", &n); // ������ ����� ��������� �������
	pP = (Player *)malloc(n*sizeof(Player)); // �������� ������ ��� ������ ��������
	for (unsigned int i = 0; i<n; i++) // ���� ����� ������ � ����������
	{
		printf_s("Player N=%d", i + 1);
		printf_s("\nFI: ");
		_flushall(); // ����� ���� ������� �����- ������
		gets_s(pP[i].fi, 127);
		fflush(stdin);// ������� ���������� ������
		printf_s("Team: ");
		fflush(stdin);
		gets_s(pP[i].tm.name_team, 63);
		fflush(stdin);
		printf_s("Position: ");
		fflush(stdin);
		gets_s(pP[i].pos, 63);
		fflush(stdin);
		printf_s("Vozrast: ");
		scanf_s("%d", &pP[i].vozr);
	}
	for (unsigned int i = 0; i < n; i++) // ���� ������ ��������� ������
		printf_s("\n%s %s %d ",
		pP[i].fi, pP[i].pos, pP[i].vozr);


	unsigned int k = 0;
	for (unsigned int i = 0; i<n; i++) // ������������� ���� �������
	if (pP[i].vozr<25) k++; // ����� ������ ������ 25 ���
	if (k) printf_s("\n������� ������ 25 ���-%d\n", k); // ������� ����� ��������� �������
	else printf_s("\n������ ������ 25 ��� �����������\n"); // ����� ������� ���
	free(pP); // ����������� ������
	system("pause"); // ������������� ���������, ���� ������� ����� �������
	return 0;
}

