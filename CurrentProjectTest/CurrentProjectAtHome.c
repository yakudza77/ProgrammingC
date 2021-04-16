#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int SumDigits(int N)  // заголовок функции
{                     //начало функции
	int  sum = 0;
	while (N != 0)
	{
		   
		sum += N % 10;
		N = N / 10;
	}
	return sum;        //функция возвращает значение sum
}                      //конец функции

main()
{
	int N, s;
	printf("\n Please enter an integer:");//Введите целое число
	scanf("%d", &N);
	s = SumDigits(N); //Вызов функции
	printf("sum of digits of a number %d is equal to %d", N, s);
	getchar();
	getchar();
}