#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int SumDigits(int N)  // ��������� �������
{                     //������ �������
	int  sum = 0;
	while (N != 0)
	{
		   
		sum += N % 10;
		N = N / 10;
	}
	return sum;        //������� ���������� �������� sum
}                      //����� �������

main()
{
	int N, s;
	printf("\n Please enter an integer:");//������� ����� �����
	scanf("%d", &N);
	s = SumDigits(N); //����� �������
	printf("sum of digits of a number %d is equal to %d", N, s);
	getchar();
	getchar();
}