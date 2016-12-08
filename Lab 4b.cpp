// Lab 4b.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

struct Team // Структура команда
{
	char name_team[64]; // Название команды
};

struct Player  // Структура игрок
{
	Team tm; // Название команды
	char fi[128]; // ФИ
	char pos[64]; // Позиция pg, sg, ,sf,pf,c 
	unsigned int vozr;  // Возраст
};


int main()
{
	setlocale(LC_ALL, "Russian");
	Player *pP; // Указатель на массив структур
	unsigned int n; // Число элементов массива
	printf_s("n=");
	scanf_s("%d", &n); // Вводим число элементов массива
	pP = (Player *)malloc(n*sizeof(Player)); // Выделяем память под массив структур
	for (unsigned int i = 0; i<n; i++) // Цикл ввода данных с клавиатуры
	{
		printf_s("Player N=%d", i + 1);
		printf_s("\nFI: ");
		_flushall(); // Сброс всех буферов ввода- вывода
		gets_s(pP[i].fi, 127);
		fflush(stdin);// Очищаем содержимое буфера
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
	for (unsigned int i = 0; i < n; i++) // Цикл печати введенных данных
		printf_s("\n%s %s %d ",
		pP[i].fi, pP[i].pos, pP[i].vozr);


	unsigned int k = 0;
	for (unsigned int i = 0; i<n; i++) // Просматриваем всех игроков
	if (pP[i].vozr<25) k++; // Нашли игрока младше 25 лет
	if (k) printf_s("\nИгроков младше 25 лет-%d\n", k); // Выводим число найденных игроков
	else printf_s("\nИгроки младше 25 лет отсутствуют\n"); // Таких игроков нет
	free(pP); // Освобождаем память
	system("pause"); // Останавливаем программу, ждем нажатия любой клавиши
	return 0;
}

