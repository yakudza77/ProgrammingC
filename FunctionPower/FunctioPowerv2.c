#include <stdio.h>
/* git test 4 */
/*возводит base в n-ю степень; n>=0*/
int power(int base, int n)
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i) {
		p = p * base;
	}
	return p;
}
main()
{
	int i;
	printf("n |2^n |-3^n \n");
	for (i = 0; i < 10; ++i) {
		printf("%d %4d %7d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}

/*p=1
i=1

for (1 ;1<=5; ++1)
	 2=1*2

for (2 ;2<=5; ++2)
	 4=2*2;

for (3;3<=5;++3)
   8= 4*2;

for (4;4<=5; ++4)
   16 = 8*2;

for (5;5<=5; ++5)
	  32= 16*2;

for (6 ;6<=5;++6)= FALSE   */

