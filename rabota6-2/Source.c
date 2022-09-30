#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RU");
	double x, y;
	printf("Введите значение x\n");
	scanf("%f", &x);
	printf("Введите значение у\n");
	scanf("%f", &y);
	if (pow(x, 2) + pow(y, 2) <= 1 || (pow(x, 2) + pow(y, 2)>=4 & pow(x, 2) + pow(y, 2) <=9)) {
		printf("ПРИНАДЛЕЖИТ");
	}
	else {
		printf("НЕ ПРИНАДЛЕЖИТ");
	}
} 