#include <stdio.h>

void go_south_east(int* lat, int* lon)
// ��� ������ ��������� ����� ��� ���� ����� ����� ������� ���� ��������� ������� � ������ ������� �������� � ��������� lat � lon
{
	printf("adress of lat %p\n", lat); // ������� ����� ��� �������� ��� �������� � lat ������� �������� ������� ���������� latitude
	printf("value of lat %d\n", *lat); // ����� ������� �������� ����� ������� �������� ������������� 
	*lat = *lat - 1;
	*lon = *lon + 1;

}


int main()
{
	int latitude = 32;
	int longitude = -64;

	printf("adress of latitude %p\n", &latitude); // ����� &latitude == �������� ��� �������� � ��������� lat

	go_south_east(&latitude, &longitude); // ������� ������ ���������� latitude � longitude � ��������� lat � lon ��� �������� � ������� go_south_east
	printf("Avast! Now at: [%d, %d]\n", latitude, longitude);
	return 0;
}