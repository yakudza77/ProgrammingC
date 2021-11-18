#include <stdio.h>

//��������� ������ ������������ ������� ����� ������
// � �� ��� ����������� ��������� 

typedef struct island {
	char* name;
	char* opens;
	char* closes;
	struct island* next;
} island;


void display(island* start)
{
	island* i = start;
	for (; i != NULL; i = i ->next) { //��������� � ���������� ������� ���� �� �������� NULL
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
	}
}

int main()
{
	island amity = { "Amity", "9:00","17:00", NULL };
	island craggy = { "Craggy", "9:00", "17:00", NULL };
	island isla_nublar = { "Isla Nublar", "9:00", "17:00", NULL };
	island skull = { "Skull","9:00","17:00", NULL };
	//�������� ����� �������� ����� ������ skull
	island shutter = { "Shutter", "9:00", "17:00", NULL };

	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &skull;
	skull.next = &shutter; //������� ����� ������ skull ����� ���������� ���������
	display(&amity);


}

