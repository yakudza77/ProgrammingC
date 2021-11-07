#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "encrypt.h"

int main()
{
	char x=0;
	char line[80];
	FILE* in, *out;

	while (x != 'X') {
		printf("1) Encrypt file\n2) Decipher file\n3) Enter X for exit\n Select option:");
		scanf(" %c", &x);

		switch (x)
		{
		case '1':

			in = fopen("D:/TESTPROGRAMM/text.txt", "r");
			out = fopen("D:/TESTPROGRAMM/encrypt.txt", "w");
			fscanf(in, "%79[^\n]\n", line);
			encrypt(line);
			fprintf(out, "%s\n", line);
			printf("%s\n\n", line);

			fclose(in);
			fclose(out);
			continue;


		case '2':


			if ((in = fopen("D:/TESTPROGRAMM/encrypt.txt", "r")) == NULL)
			{
				printf("Encrypt file first\n");
				break;
			}
			out = fopen("D:/TESTPROGRAMM/decipher.txt", "w");

			fscanf(in, "%79[^\n]\n", line);
			encrypt(line);
			fprintf(out, "%s\n", line);
			printf("%s\n\n", line);

			fclose(in);
			fclose(out);
			break;
		case 'X':
			printf("Exit from programm");
			continue;


		default:
			printf("Wrong input\n");
			break;



		}
	}
	

return 0;

}
