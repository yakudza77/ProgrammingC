#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char line[80];
	FILE* in = fopen("D:/TESTPROGRAMM/spooky.csv", "r");//r читает из файла spooky.csv использу€ поток in
	FILE* file1 = fopen("D:/TESTPROGRAMM/ufos.csv", "w");//w записывает в файл ufos.csv использу€ поток file1
	FILE* file2 = fopen("D:/TESTPROGRAMM/disappearances.csv", "w");//w записвает в файл disappearances.csv использу€ поток file2
	FILE* file3 = fopen("D:/TESTPROGRAMM/others.csv", "w");//w записывает в файл others.csv использу€ поток file3

	while (fscanf(in, "%79[^\n]\n", line) == 1) { //считывает построчно в поток in и отправл€ет данные в массив line 
		if (strstr(line, "UFO"))              // ищет совпадение в строке массива line cо словом UFO
			fprintf(file1, "%s\n", line); //если true отправл€ет данную строку line в поток file1 
		else if (strstr(line, "Disappearance")) // ищет совпадение в строке массива line cо словом Disappearance
			fprintf(file2, "%s\n", line);  //если true отправл€ет данную строку line в поток file2
		else
			fprintf(file3, "%s\n", line); // всЄ остальное что не совпало отправл€ет line в поток file3
	}
	fclose(file1);// закрываем потоки после завршени€ работы цикла while
	fclose(file2);
	fclose(file3);
	return 0;

}