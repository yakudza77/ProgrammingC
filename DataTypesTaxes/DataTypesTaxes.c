// ��� ���������� ��������� ��������� ���� � ��������� ������� ������������� ����� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "totaller.h"   // Put declarations in header file ���������� ������� ��� �� ����� ��������� � ������������ ���� 
//float add_with_tax(float f);// Function declaretion ��������� ������� �� � ������

float total = 0.0;
short count = 0;
short tax_percent = 6;
int main()
{
	float val;
	printf("Price of item: ");
	while (scanf("%f", &val) == 1 && (!(val == 'x'))) { // && (!(val=='x') for exit from enter values press x
		printf("Total so far: %.2f\n", add_with_tax(val)); // Call function ����� �������
		printf("Price of item: ");
	}
	printf("\nFinal total: %.2f\n", total);
	printf("Number of items: %hi\n", count);
	return 0;
}
float add_with_tax(float f)     // define function ����������� �������
{
	float tax_rate = 1 + tax_percent / 100.0;
	total = total + (f * tax_rate);
	count = count + 1;
	return total;
}
