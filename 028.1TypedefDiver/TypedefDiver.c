#include<stdio.h>

typedef struct {
	float tank_capacity;
	int tank_psi;
	const char* suit_material;
} equipment; //equipment its alias of struct , ��� ��������� ���������. 
//typedef means you are going to give struct type a new name
//typedef �������� ��� �� ���������� ��������� ��������� ����� ��� 

typedef struct scuba { //scuba its struct type name
	const char* name;
	equipment kit;
} diver;               //diver its alias you can use it whithout word struct
// diver ��� ��������� ��� ���� ��������� scuba, � ������� �� ���� ���������, ��������� ����� ������ ��� ����� struct

void badge(diver d)
{
	printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
		d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);

}
int main()
{
	diver randy = { "Randy", {5.5, 3500, "Neoprene"} };//diver alias of struct scuba, randy is the variable name
	//diver ��� ��������� ��������� scuba, randy ��� ��� ���������� 
	badge(randy);
	return 0;
}