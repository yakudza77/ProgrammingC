#include <stdio.h>
/*������� �������� �������� 1-� ������*/
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

