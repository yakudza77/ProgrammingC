#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];

	while (scanf("%f,%f,%79s[^\n]", &latitude, &longitude, info) == 3) {
		if ((latitude > 26) && (latitude < 34))
			if ((longitude > -76) && (longitude < -64))
				printf("%f,%f,%s\n", latitude, longitude,info);
	}
	return 0;

}

/*Программа 021Bermuda.exe отсеивает не нужные координаты далее программа 019Geo2Json.exe преобразует csv данные в json
с помощью команды | соединяем две программы в одну в cmd отправляем на вход файл spooky.csv и получаем на выходе созданный файл output.json  

D:\TESTPROGRAMM>(021Bermuda.exe|019Geo2Json.exe)<spooky.csv>output.json

spooky.csv
30.685163,-68.137207,Type=Yeti
28.304380,-74.575195,Type=UFO
29.132971,-71.136475,Type=Ship
28.343065,-62.753906,Type=Elvis
27.868217,-68.005371,Type=Goatsucker
30.496017,-73.333740,Type=Disappearance
26.224447,-71.477051,Type=UFO
29.401320,-66.027832,Type=Ship
37.879536,-69.477539,Type=Elvis
22.705256,-68.192139,Type=Elvis
27.166695,-87.484131,Type=Elvis

output.json 
data=[
{latitude: 30.685163, longitude: -68.137207, info: 'Type=Yeti'},
{latitude: 28.304380, longitude: -74.575195, info: 'Type=UFO'},
{latitude: 29.132971, longitude: -71.136475, info: 'Type=Ship'},
{latitude: 27.868217, longitude: -68.005371, info: 'Type=Goatsucker'},
{latitude: 30.496017, longitude: -73.333740, info: 'Type=Disappearance'},
{latitude: 26.224447, longitude: -71.477051, info: 'Type=UFO'},
{latitude: 29.401320, longitude: -66.027832, info: 'Type=Ship'}
]

*/
