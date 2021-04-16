#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
main()
{
	float S, z, c, d, a;
	S = 0; z = 1; c = 1; d = 2; //начальные значения
	a = 0.5;                    //первый элемент последовательности

	while (a >= 0.001)
	{
		S = S + z * a;          //добавить элемент к сумме
		z = -z;                 //изменить переменные z, c, d
		c++;
		d = d * 2;
		a = c / d;              //модуль следующего элементы
		printf("\n a = %f", a);
		printf("\ncurrent sum  S = %f", S);
	}
	printf("\nsum S = %f", S);

	getchar();
	getchar();
}
