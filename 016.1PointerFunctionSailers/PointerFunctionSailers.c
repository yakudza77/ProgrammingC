#include <stdio.h>

void go_south_east(int* lat, int* lon)
// “ип данных указател€ нужен дл€ того чтобы знать сколько байт считывать начина€ с адреса который хранитс€ в указателе lat и lon
{
	printf("adress of lat %p\n", lat); // ¬ыводим адрес что хранитс€ как значение в lat который €вл€етс€ адресом переменной latitude
	printf("value of lat %d\n", *lat); // „тобы вывести значение нужно сделать операцию разыменовани€ 
	*lat = *lat - 1;
	*lon = *lon + 1;

}


int main()
{
	int latitude = 32;
	int longitude = -64;

	printf("adress of latitude %p\n", &latitude); // јдрес &latitude == значению что хранитс€ в указателе lat

	go_south_east(&latitude, &longitude); // ѕередаЄм адреса переменных latitude и longitude в указатели lat и lon что хран€тс€ в функции go_south_east
	printf("Avast! Now at: [%d, %d]\n", latitude, longitude);
	return 0;
}