#include <stdio.h>
/* копирование ввода на вывод; 2-я версия */
main()
{
	int с;
	while ((с = getchar()) != EOF)
		putchar(с);

}