#include <stdio.h>
//������ ��������� �������� � ��� �������� ������ � ����� ��������� � ��� �� ��� ������� ����� �������

struct exercise {         // �������� exercise ����� ��� �������� description � duration
	const char* description;
	float duration;
};

struct meal {            // ��������� meal ����� ��� �������� ingredients � weight
	const char* ingredients;
	float weight;
};

struct preferences { //��������� meal � exercise ������� � ��������� preferences � ����� �������� food � exercise
	struct meal food;
	struct exercise exercise; 
};

struct fish {       //��������� preferences ������� � ��������� fish � ����� �������� care
	const char* name;
	const char* species;
	int teeth;
	int age;
	struct preferences care;
};

label(struct fish a)
{
	printf("\nLabel\n");
	printf("Name:%s\nSpecies:%s\n%d years old, %d teeth\n", a.name, a.species, a.age, a.teeth);
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
		a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
	// ������ ��� ������� ������ ����� ������� ������� ���������� � ��������� ����������
}



int main() {
	//������ ��� �������� ������ �� ���������  �������� � ������� ����� �������
    struct fish snappy = { "Snappy","Piranha",69, 4,{{"meat", 0.2}, {"swim in the jacuzzi", 7.5}} };

	//������ ��� �������� ������ �� ��������� ��������� � ������ ������� ��������
	struct fish Alisa; 
	Alisa.name = "Alisa";
	Alisa.species = "shark";
	Alisa.teeth = 300;
	Alisa.age = 5;
	Alisa.care.food.ingredients = "raw fish";
	Alisa.care.food.weight = 20;
	Alisa.care.exercise.description = "swim in the pool";
	Alisa.care.exercise.duration = 9.5;
	struct fish Baron = { .name = "Baron",.age = 15,.care.exercise.description = "like jumping over the hoop" };
	//������ ���������� ������ ������ �� ��������� ���������
	// designated initializers ����������� �������������� ����� ������������ ��� �� � union
	printf(" %s like to %s \n\n ", snappy.name, snappy.care.exercise.description); //������ ������ ������ �� ��������� ���������
	printf("%s like to %s and then eat %s \n", Alisa.name, Alisa.care.exercise.description, Alisa.care.food.ingredients);

	label(snappy);

	return 0;
}