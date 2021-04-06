#define LOWER 0 /*Нижнаяя граница*/
#define UPPER 300 /*Верхняя граница*/	
#define STEP 20 /*Шаг*/

main() {
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}