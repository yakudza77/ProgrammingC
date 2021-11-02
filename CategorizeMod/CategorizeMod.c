#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char line[80];
	if (argc != 6) {
		fprintf(stderr, "You need to give 5 arguments\n");
		return 1;
	}
	//FILE* in = fopen("spooky.csv", "r"); without check
	FILE* in;
	if (!(in = fopen("spooky.csv", "r"))) {
		fprintf(stderr, "Can't open the file.\n");
		return 1;
	}
	FILE* file1 = fopen(argv[2], "w");
	FILE* file2 = fopen(argv[4], "w");
	FILE* file3 = fopen(argv[5], "w");

	while (fscanf(in, "%79[^\n]\n", line) == 1) {
		if (strstr(line, argv[1]))
			fprintf(file1, "%s\n", line);
		else if (strstr(line, argv[3]))
			fprintf(file2, "%s\n", line);
		else
			fprintf(file3, "%s\n", line);
	}
	fclose(file1);
	fclose(file2);
	fclose(file3);
	return 0;
}

//Run Release file in CMD with D:\TESTPROGRAMM>023CategorizeMod.exe UFO aliens.csv Elvis elvises.csv the_rest.csv
// argc = 6
// argv[0]="023CategorizeMod" argv[1]="UFO" argv[2]="aliens.csv" argv[3]="Elvis" argv[4] ="elvises.csv" argv[5]="the rest.csv"
//From file in spooky.csv
/*30.685163,-68.137207,Type=Yeti
28.304380,-74.575195,Type=UFO
29.132971,-71.136475,Type=Ship
28.343065,-62.753906,Type=Elvis
27.868217,-68.005371,Type=Goatsucker
30.496017,-73.333740,Type=Disappearance
26.224447,-71.477051,Type=UFO
29.401320,-66.027832,Type=Ship
37.879536,-69.477539,Type=Elvis
22.705256,-68.192139,Type=Elvis
27.166695,-87.484131,Type=Elvis*/

//We get

//aliens.csv
/*28.304380,-74.575195,Type=UFO
26.224447,-71.477051,Type=UFO
*/

//elvises.csv
/*28.343065,-62.753906,Type=Elvis
37.879536,-69.477539,Type=Elvis
22.705256,-68.192139,Type=Elvis
27.166695,-87.484131,Type=Elvis
*/

//the rest.csv
/*30.685163,-68.137207,Type=Yeti
29.132971,-71.136475,Type=Ship
27.868217,-68.005371,Type=Goatsucker
30.496017,-73.333740,Type=Disappearance
29.401320,-66.027832,Type=Ship
*/