#include <stdio.h>
//int compare_scores (const int* a, const int* b) 
//����� ����� �������� ��� ������ � ������� � ���������� �������, ���������� ����������� ������� ���������
int compare_scores(const void* score_a, const void* score_b)
{
	int a = *(int*)score_a;// ���� �������� ��� ������ �����, �� ������ ��� ������ �� �����
	int b = *(int*)score_b;
	return a - b; // ���������� �� ����������� 
	//return *a - *b; //���� �������� ���� ����� �� ����� 
	//retun *b - *a;// ���������� �� ��������
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