#include <stdio.h>

//св€занные списки поддерживают вставку новых данных
// ¬ —и это рекурсивные структуры 

typedef struct island {
	char* name;
	char* opens;
	char* closes;
	struct island* next;
} island;


void display(island* start)
{
	island* i = start;
	for (; i != NULL; i = i ->next) { //ѕереходим к следующему острову пока не встретим NULL
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
	}
}

int main()
{
	island amity = { "Amity", "9:00","17:00", NULL };
	island craggy = { "Craggy", "9:00", "17:00", NULL };
	island isla_nublar = { "Isla Nublar", "9:00", "17:00", NULL };
	island skull = { "Skull","9:00","17:00", NULL };
	//Ќапример можно добавить новый остров skull
	island shutter = { "Shutter", "9:00", "17:00", NULL };

	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &skull;
	skull.next = &shutter; //—в€зать новый остров skull между остальными остравами
	display(&amity);


}

