#include <stdio.h>
typedef union
{
	short count;
	float weight;
	float volume;

}quantity; //Объединение quantity (quantity это величина)

typedef struct {
	const char* name;
	const char* country;
	quantity amount; // Объеденение quantity c назчанием amount внутри стурктуры fruit_order (amount это количество)
}fruit_order;

int main()
{
	fruit_order apples = { "apples", "England", .amount.weight = 4.2 };
	// стрктура fruit_order с названием apples 
	printf("This order contains %2.2f lbs of %s\n", apples.amount.weight, apples.name);
	//Работа с объединением запись и вывод значений из union amount
}