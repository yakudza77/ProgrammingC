#define _CRT_SECURE_NO_WARNINGS // ��� ����������� ������������� scanf
#include <stdio.h>
int charcounter(void)
{
	int nc;
	printf("Enter characteres:");
	for (nc = 0; getchar() != EOF; ++nc); {/*���������_1 (������������) ������������� ��������; ���������_2 (������� �����������) �������� ���������; ���������_3 (��������� ��������) ���������� �������� �� �������*/
		printf("%.0d\n", nc);
	}
	getchar();
	main();

}

int changetemp(void)
//����������� ����������� � ����������� � �������
{
	int fahr;
	printf("fahr celsius \n");
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	getchar();
	getchar();
	main();
}

int changetemp2(void)
//����������� ����������� � �������� � ����������
{
	int celsius;
	printf("celsius fahr \n");
	for (celsius = 0; celsius <= 300; celsius = celsius + 20) {
		printf("%3d %6d\n", celsius, (celsius * 9 / 5) + 32);
	}
	getchar();
	getchar();
	main();
}

main()
{
	int a;
	printf("Enter number of programm: \n 1) Show temperature From Fahr to Celsius \n 2) Show temperature From Celsius to Fahr \n 3) Char Counter \n ");
	scanf("%d", &a);
	if (a == 1) {
		changetemp();
	}
	else if (a == 2) {
		changetemp2();
	}
	else if (a == 3) {
		charcounter();
	}
	else {
		printf("The is No such programm");
		getchar();
		getchar();
	}
	return (0);
}

