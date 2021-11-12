#include <stdio.h>
//ѕример вложенных структур и как добавить данные в такую структуру а так же как вывести через функцию

struct exercise {         // —труткра exercise имеет два атребута description и duration
	const char* description;
	float duration;
};

struct meal {            // —труктура meal имеет два атрибута ingredients и weight
	const char* ingredients;
	float weight;
};

struct preferences { //структуры meal и exercise вложены в структуру preferences и имеют названи€ food и exercise
	struct meal food;
	struct exercise exercise; 
};

struct fish {       //структура preferences вложена в структуру fish и имеет название care
	const char* name;
	const char* species;
	int teeth;
	int age;
	struct preferences care;
};

label(struct fish a)
{
	printf("Label\n");
	printf("Name:%s\nSpecies:%s\n%d years old, %d teeth\n", a.name, a.species, a.age, a.teeth);
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
		a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
	// пример как вывести данные через функцию котора€ обращаетс€ к вложенным структурам
}



int main() {
	//ѕример как записать данные во вложенную стрктуры и вызвать через функцию
    struct fish snappy = { "Snappy","Piranha",69, 4,{{"meat", 0.2}, {"swim in the jacuzzi", 7.5}} };
	printf(" %s like to %s \n\n ", snappy.name, snappy.care.exercise.description); //ѕример вывода данных из вложенной структуры
	label(snappy);

	return 0;
}