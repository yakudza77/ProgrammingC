#include <stdio.h>
/*
void happy_birthday(turtle t)
{

	t.age = t.age + 1;// Поле age в структуре на которую указывает t
	printf("Happy Birthday %s! You are now %d years old!\n", t.name, t.age);


int main()
{
	turtle myrtle = { "Myrtle","Leatherback sea turtle", 99 };
	happy_birthday(myrtle);//Передаем в функцию адрес переменной
	printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;

	Если запишем программу так, то в результате выполнения функции изменения будут только
	в лок переменной функции t.age , в самой структуре значение myrtle.age останется прежним 99

	*/


typedef struct {
	const char* name;
	const char* species;
	int age;
} turtle;

void happy_birthday(turtle* t) //Указатель на структуру
{
	//(*t).age = (*t).age + 1;    //Значение на котрое он указывает
	t->age = t->age + 1;// Поле age в структуре на которую указывает t
	printf("Happy Birthday %s! You are now %d years old!\n", t->name, t->age);
	//(*t).name, (*t).age);
}

int main()
{
	turtle myrtle = { "Myrtle","Leatherback sea turtle", 99 };
	happy_birthday(&myrtle);//Передаем в функцию адрес переменной 
	printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;

}