#include <stdio.h>
/* raplace tabs and slash HOMEWORK 1.10 */
int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar(92); /* \ */
			putchar(116); /* t */
		}
		else if (c == 92) {
			putchar(92);
			putchar(92);
		}
		else {
			putchar(c);
		}
	}
	//....
	putchar(92);
}
