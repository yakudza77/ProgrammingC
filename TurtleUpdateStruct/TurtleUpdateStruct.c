#include <stdio.h>
/*
void happy_birthday(turtle t)
{

	t.age = t.age + 1;// ���� age � ��������� �� ������� ��������� t
	printf("Happy Birthday %s! You are now %d years old!\n", t.name, t.age);


int main()
{
	turtle myrtle = { "Myrtle","Leatherback sea turtle", 99 };
	happy_birthday(myrtle);//�������� � ������� ����� ����������
	printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;

	���� ������� ��������� ���, �� � ���������� ���������� ������� ��������� ����� ������
	� ��� ���������� ������� t.age , � ����� ��������� �������� myrtle.age ��������� ������� 99

	*/


typedef struct {
	const char* name;
	const char* species;
	int age;
} turtle;

void happy_birthday(turtle* t) //��������� �� ���������
{
	//(*t).age = (*t).age + 1;    //�������� �� ������ �� ���������
	t->age = t->age + 1;// ���� age � ��������� �� ������� ��������� t
	printf("Happy Birthday %s! You are now %d years old!\n", t->name, t->age);
	//(*t).name, (*t).age);
}

int main()
{
	turtle myrtle = { "Myrtle","Leatherback sea turtle", 99 };
	happy_birthday(&myrtle);//�������� � ������� ����� ���������� 
	printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;

}