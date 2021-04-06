#include <stdio.h>
/*Подсчёт вводимых символов 1-я версия*/
main() {
	long nc, c;
	nc = 0;
	printf("Type chars:");
	while ((c = getchar()) != EOF) {
		if ((c != '\n') && (c != '\t') && (c != ' ')) {
			++nc;
		}
	}
	printf("numbers of chars:%ld\n", nc);

}

