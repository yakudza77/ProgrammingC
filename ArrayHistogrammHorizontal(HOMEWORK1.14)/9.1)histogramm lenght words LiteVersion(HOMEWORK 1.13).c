#include <stdio.h>
main()
// HOMEWORK 1.13 �������� ���������, ���������� ����������� ���� �������� ����
{
	int c, nc;
	nc = 0;
	printf("Type text:");
	while ((c = getchar()) != EOF) {
		++nc;

		if (c == ' ') {
			printf("\n");
		}
		else {
			printf("#");
		}
	}



}