#include<stdio.h>

typedef struct {
	float tank_capacity;
	int tank_psi;
	const char* suit_material;
} equipment; //equipment its alias of struct , это псевдоним структуры. 
//typedef means you are going to give struct type a new name
//typedef означает что мы собираемся присвоить структуре новое имя 

typedef struct scuba { //scuba its struct type name
	const char* name;
	equipment kit;
} diver;               //diver its alias you can use it whithout word struct
// diver это псевдоним для типа скруктуры scuba, в отличии от типа стркутыры, псевдоним можно писать без слова struct

void badge(diver d)
{
	printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
		d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);

}
int main()
{
	diver randy = { "Randy", {5.5, 3500, "Neoprene"} };//diver alias of struct scuba, randy is the variable name
	//diver это псевдоним скруктуры scuba, randy это имя переменной 
	badge(randy);
	return 0;
}