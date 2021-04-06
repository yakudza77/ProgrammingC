#include <stdio.h>
/*Подсчёт вводимых символов 1-я версия*/
main() {
	long nc;
	nc = 0;
	while (getchar() != EOF) {
		if (nc == '\n')
			--nc;
		else
			++nc;
	}

	printf("%ld\n", nc);

}


