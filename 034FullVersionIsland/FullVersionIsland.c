#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
	char* name;
	char* opens;
	char* closes;
	struct island* next;
} island;



island* create(char* name)
{
	island* i = malloc(sizeof(island));
	i->name = _strdup(name); //i->name = name; Старый вариант выводит два раза последнее название острова потому что используется локальный символьный массив name. Это значит что оба острова делят одну строку с названием.
	//strdup путем обращения к функции malloc() выделяет память, достаточную для хранения дубликата строки, на которую указывает name, а затем производит копирование этой строки в выделенную область и возвращает указатель на нее.
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

void display(island* start)
{
	island* i = start;
	for (; i != NULL; i = i->next) { //Переходим к следующему острову пока не встретим NULL
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
	}
}


void release(island* start)
{
	island* i = start;
	island* next = NULL;
	for (; i != NULL; i = next) {
		next = i->next;
		free(i->name);
		free(i);
		i = NULL; //Освободилась только память но сами адреса структур остались, так что принял решение что и их нужно обнулить, в книге этого нет.
	}


}

int main() {

	island* start = NULL;
	island* i = NULL;
	island* next = NULL;
	char name[80];
	for (; fgets(name, 80, stdin) != NULL; i = next) {
		next = create(name);
		if (start == NULL)
			start = next;
		if (i != NULL)
			i->next = next;
	}
	display(start);
	release(start);
	return 0;
}