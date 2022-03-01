#include <stdio.h>
//int compare_scores (const int* a, const int* b) 
//ћожно сразу привести тип данных к нужному в аргументах функции, получаетс€ сокращЄнный вариант написани€
int compare_scores(const void* score_a, const void* score_b)
{
	int a = *(int*)score_a;// ≈сли приводим тип данных сразу, то данные две строки не нужны
	int b = *(int*)score_b;
	return a - b; // —ортировка по возрастанию 
	//return *a - *b; //если приводим типы сразу то пишем 
	//retun *b - *a;// —ортировка по убыванию
}

int main()
{
	int i;
	int scores[] = { 543,323,32,554,11,3,112 };
	printf("Original array:\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d\n", scores[i]);
	}
	qsort(scores, 7, sizeof(int), compare_scores);
	printf("\n\nSorted array:\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d\n", scores[i]);
	}


}