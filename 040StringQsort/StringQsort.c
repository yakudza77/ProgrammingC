#include <stdio.h>

int compare_names(const void* a, const void* b)
{
	char** sa = (char**)a;
	char** sb = (char**)b;
	return strcmp(*sa, *sb);
} 
//Short version of this function
/*int compare_names(const char** a, const char** b)
{
	return strcmp(*a,*b);
}
*/
int compare_names_desc(const void* a, const void* b)
{
	return compare_names(b, a);// -compare_names(a, b); second version
}

int main() 
{
	int i;
	char* cars [] = {"Ford","Dacia","Audi","Opel","Toyota","Mazda","Renault","Bmw","Honda"};
	printf("List of cars:\n");
	int n = sizeof(cars) / sizeof(cars[0]);
	for (i = 0; i < n; i++)
	{
		printf("%s\n", cars[i]);
	}
	
	qsort(cars, n, sizeof(cars[0]), compare_names);
	printf("\nSorted list of cars:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\n", cars[i]);
	}

	qsort(cars, n, sizeof(cars[0]), compare_names_desc);
	printf("\nDesc Sorted list of cars:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\n", cars[i]);
	}


}