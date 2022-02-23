#include <stdio.h>

int NUM_ADS = 7;
char* ADS[] = {
		"William:SBM GSOH likes sports, TV,dining",
		"Matt: SWM NS likes art,movies, theater",
		"Luis: SLM ND likes books, theater, art",
		"Mike: DWM DS likes trucks, sports and bieber",
		"Peter: SAM likes chess, working out and art",
		"Josh: SJM likes sports, movies and theater",
		"Jed: DBM likes theater, books and dining"
};

int sports_no_bieber(char* s)
{
	return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char* s)
{
	return strstr(s, "sports") || strstr(s, "working out");
}

int ns_theater(char* s)
{
	return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char* s)
{
	return strstr(s, "art") || strstr(s, "theater") || strstr(s, "dining");
}


void find(int (*match)(char*)) // Указатель на функцию с именем match
{
	int i;
	puts("Search results:");
	puts("------------------------------------");
	for (i = 0; i < NUM_ADS; i++)
	{
		if (match(ADS[i])) // Вызов функции match в которую передаём как аргумент строку из нашего массива ADS[i]
		{
			printf("%s\n", ADS[i]);
		}
	}
	puts("-----------------------------------");

}

int main()
{
	// Здесь мы передаём в функцию find другие функции с готовыми параметрами поиска
	find(sports_no_bieber);   //I want someone into sports, but definitely not into Bieber
	find(sports_or_workout); //Find someone who likes sports or working out
	find(ns_theater);        //I want a non-smoker who likes the theater
	find(arts_theater_or_dining); //Find someone who likes the arts, theater or dining
	//Указателю на функцию можно присвоить функцию, которая соответствует указателю по возвращаемому типу и спецификации параметров

}