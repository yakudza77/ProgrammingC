#include <stdio.h>
/* counting spaces, tabs, new lines HOMEWORK 1.8 */
int main()
{
	int c, nl, tabs, spaces;
	nl = 0;
	tabs = 0;
	spaces = 0;
	printf("This program counts the number of spaces, tabs and new lines. \n Type text:");
	while ((c = getchar()) != EOF) /*������������� ���� ��� ������� ��� ��������� ����� ����� � ����� ��������� �� �����(!=) EOF �������� �������� false */
	{

		if (c == 32) { /*������� ���� ������ ������� ��� ��� �� ���� ����������� � ������, ��� ����� �������� ������� ������ ������������ ������ ����� �� ������ if*/
			++spaces;
		}
		else if (c == '\t') {/*����� ���� ������ ������ �� ��� ������ ���������� ��� � ����������*/
			++tabs;
		}
		else if (c == '\n') {/*����� ���� ������ ������� � ��������� �� ��� ������ ���������� ��� � ��������� ������*/
			++nl;
		}



	}
	printf("\n\n\nnew lines: %d,\n tabs: %d,\n spaces: %d\n", nl, tabs, spaces);

}