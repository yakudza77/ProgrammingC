#include <stdio.h>
int power(int m, int n);
/* ���� ������� power */
main()
{
	int i;
	printf("n |2**n |-3**n \n");
	for (i = 0; i < 10; ++i)
		printf("%d %4d %7d\n", i, power(2, i), power(-3, i));
	return 0;
}
/*�������� base � n-� �������; n>=0*/
int power(int base, int n)
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}