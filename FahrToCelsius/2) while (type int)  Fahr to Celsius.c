#include <stdio.h>
/*������ ������� ���������� �� ���������� � ������� ��� fahr = 0, 20,...,300 */

main()
{
	int fahr, celsius;        /*� �� ����� ���������� ������ ���� ���������, ������ ��� ��� ����� ������������*/
	int lower, upper, step;   /*��� int �������� ��� �������� ���������� ���� ����� �����*/

	lower = 0; /*������ ������� ������� ����������*/
	upper = 300; /*������� �������*/
	step = 20; /*���*/

	fahr = lower;  /*����������� ���������� fahr ���������,������� �������� �� ���������� lower*/
	while (fahr <= upper) {     /*���� ����������� �� ��� ��� ���� fahr �� ������ ����� upper*/
		celsius = 5 * (fahr - 32) / 9;  /* ������� �������������� ����������, ��� ������ ���� ��� ���� ����� (��� ����������)*/
		printf("%d\t%d\n", fahr, celsius); /*������� ��������� ��������� �� �����*/
		fahr = fahr + step;    /*���������� ��� �� ��� ��� ���� fahr �� ������ ����� upper(300)*/
	}
}