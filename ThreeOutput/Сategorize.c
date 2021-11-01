#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char line[80];
	FILE* in = fopen("D:/TESTPROGRAMM/spooky.csv", "r");//r ������ �� ����� spooky.csv ��������� ����� in
	FILE* file1 = fopen("D:/TESTPROGRAMM/ufos.csv", "w");//w ���������� � ���� ufos.csv ��������� ����� file1
	FILE* file2 = fopen("D:/TESTPROGRAMM/disappearances.csv", "w");//w ��������� � ���� disappearances.csv ��������� ����� file2
	FILE* file3 = fopen("D:/TESTPROGRAMM/others.csv", "w");//w ���������� � ���� others.csv ��������� ����� file3

	while (fscanf(in, "%79[^\n]\n", line) == 1) { //��������� ��������� � ����� in � ���������� ������ � ������ line 
		if (strstr(line, "UFO"))              // ���� ���������� � ������ ������� line c� ������ UFO
			fprintf(file1, "%s\n", line); //���� true ���������� ������ ������ line � ����� file1 
		else if (strstr(line, "Disappearance")) // ���� ���������� � ������ ������� line c� ������ Disappearance
			fprintf(file2, "%s\n", line);  //���� true ���������� ������ ������ line � ����� file2
		else
			fprintf(file3, "%s\n", line); // �� ��������� ��� �� ������� ���������� line � ����� file3
	}
	fclose(file1);// ��������� ������ ����� ��������� ������ ����� while
	fclose(file2);
	fclose(file3);
	return 0;

}