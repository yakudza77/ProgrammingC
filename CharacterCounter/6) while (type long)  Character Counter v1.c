#include <stdio.h>
/*������� �������� �������� 1-� ������*/
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


