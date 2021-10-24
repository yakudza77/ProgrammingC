#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];
	int count = 0;
	while (card_name[0] != 'X') {
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch (card_name[0])
		{
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
	    //Exit from programm if input is'X'
		case'X':
			puts("Exit from programm");
			continue;
		default:
			val = atoi(card_name);
			//Display error if value its out of range 2-10
			//Number cards have a value from 2 to 10. There is an error in the book when the range is 1-10
			//Skip loop and try again
			if (!((val >= 2) && (val <= 10))) {  //Alternative If ((val <2)||(val >10))  
				puts("Wrong input");
				continue;
			}
		}
		if ((val >= 3) && (val <= 6)) {
			count++;

		}
		else if (val == 10) {
			count--;
		}
		printf("Current count: %i\n", count);
	}
	return 0;
}