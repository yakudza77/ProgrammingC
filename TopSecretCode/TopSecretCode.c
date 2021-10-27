#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char word[10];
	int i = 0;
	while (scanf("%9s", word) == 1) {
		i = i + 1;
		if (i % 2) {
			fprintf(stdout, "%s\n", word);
		}
		else
			fprintf(stderr, "%s\n", word);
		
	}
	return 0;
}

//in cmd C:\Programmtest>020TopSecretCode.exe<secret.txt>message.txt 2>message2.txt

/*Input text from File secret.txt : 
THE BUY SUBMARINE
SIX WILL EGGS
SURFACE AND AT
SOME NINE MILK PM*/
/*OutPut Text message.txt: 
THE
SUBMARINE
WILL
SURFACE
AT
NINE
PM*/
/*Output Text message2.txt:
BUY
SIX
EGGS
AND
SOME
MILK

*/