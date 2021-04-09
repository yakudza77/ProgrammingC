#include <stdio.h>
#define IN 1 /*внутри слова*/
#define OUT 0 /*вне слова*/

main()
{
	int  c, nw, state;
	state = OUT;
	nw = 0;
	while ((c = getchar()) != EOF) {
	
		if (c == ' ' || c == '\n' || c == '\t') 
			state = OUT; 
		else if (state == OUT) { 
			++nw;
		}

	}
	printf(" word:%d \n", nw); 
}