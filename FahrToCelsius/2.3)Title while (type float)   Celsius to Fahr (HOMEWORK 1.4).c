#include <stdio.h>
/*������ ������� ���������� �� ������� � ����������.
celsius = 0, 20 ...300; ������� � ��������� ������ */

main()
{
	float fahr, celsius; /*float ��� � ��������� ������*/
	int lower, upper, step; /*int ����� ���*/
	lower = 0; /*������ ������� ������� ����������*/
	upper = 300; /*������� �������*/
	step = 20; /*���*/

	celsius = lower;/*����������� ���������� celsius ���������,������� �������� �� ���������� lower*/
	printf("celsius fahr\n");/*��������� ��� �������, ������� �� ���� ����� ����� ����� ���������� ��������� ������ ��� HOMEWORK 1.3*/
	while (celsius <= upper) {/*���� ���� ������� � ��������� ������, � ������ - �����, �� ����� ��� ��� �������� ����� ���������, ��������� ����� ������������ � ����� � ��������� ������*/
		fahr = (celsius * 9 / 5) + 32; /*���������� ���������� ����� �� ���� ���������� ����� �������� �������� �� �� ������� ������������� (����� � ��������� ������) �������� ������� HOMEWORK1.4 */
		printf("%3.0f %6.1f\n", celsius, fahr);/* ����� ����������,  ������ ������������ ������ 3 (�����) �������� 0. ������ ������������ ������ 6 ���� � �������� 1 (���� ����� � ������� �����). ������������� �������� ���� �������� �� ����������, ������� ���� �� ��������������� */
		celsius = celsius + step; /*������ ������ ����� ���������� celsius ������������� �� 20 (���)*/
	}
}