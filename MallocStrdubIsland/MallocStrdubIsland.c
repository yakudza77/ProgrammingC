#include <stdio.h>
#include <stdlib.h>

//связанные списки поддерживают вставку новых данных
// В Си это рекурсивные структуры 

typedef struct island {
	char* name;
	char* opens;
	char* closes;
	struct island* next;
} island;


void display(island* start)
{
	island* i = start;
	for (; i != NULL; i = i->next) { //Переходим к следующему острову пока не встретим NULL
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
	}
}

island* create(char* name)
{
	island* i = malloc(sizeof(island));
	i->name = name;
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

int main()
{
	char name[80];//Массив для записи названия острова
	fgets(name, 80, stdin);// Запрашивает имя первого острова
	island* p_island0 = create(name); // Здесь создается первый остров
	
	fgets(name, 80, stdin);//Запрашивается имя второго острова
	island* p_island1 = create(name);//Здесь создается второй остров
	p_island0->next = p_island1;// Здесь первый остров связывается со вторым

	display(p_island0);

	return 0;


}

