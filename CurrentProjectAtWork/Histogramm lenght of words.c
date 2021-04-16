#include <stdio.h>

main() {
	long lenght, c;
	lenght = 0;
	printf("Type chars:");
	while ((c = getchar()) != EOF) {
		if ((c != '\n') && (c != '\t') && (c != ' ')) {
			++lenght;
		}
	}
	printf("numbers of chars:%ld\n", lenght);

}