#include <stdio.h>
/* counting spaces, tabs, new lines HOMEWORK 1.8 */
int main()
{
	int c, nl, tabs, spaces;
	nl = 0;
	tabs = 0;
	spaces = 0;
	printf("This program counts the number of spaces, tabs and new lines. \n Type text:");
	while ((c = getchar()) != EOF) /*ќстанавливаем цикл при условии что встречаем конец файла и через сравнение не равен(!=) EOF получаем значение false */
	{

		if (c == 32) { /*—начало ищем символ пробела так как он чаще встречаетс€ в тексте, тем самым экономим ресурсы машины останавлива€ работу цикла на первом if*/
			++spaces;
		}
		else if (c == '\t') {/*«атем если симовл пробел не был найден сравниваем его с табул€цией*/
			++tabs;
		}
		else if (c == '\n') {/*«атем если символ пробела и табул€ции не был найден сравниваем его с переносом строки*/
			++nl;
		}



	}
	printf("\n\n\nnew lines: %d,\n tabs: %d,\n spaces: %d\n", nl, tabs, spaces);

}