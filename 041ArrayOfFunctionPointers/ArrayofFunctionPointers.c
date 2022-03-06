//Сначало через switch вызывались функции. А потом  использовали другой способ добавили массив указателей на функции в глобальные переменные и вызывали его через цикл for

#include <stdio.h>

enum response_type { DUMP, SECOND_CHANCE, MARRIAGE };// Номер перечесления совпадает с номером в массиве функциий void (*replies[])(response)  0,1,2

typedef struct {
	char* name;
	enum response_type type;
}response;

void dump(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date contacted us to");
	puts("say that they will not be seeing you again");
}
void second_chance(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Good news: your last date has asked us to");
	puts("arrange another meeting. Please call ASAP.");
}
void marriage(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Congratulations! Your last date has contacted");
	puts("us with a proposal of marriage.");
}

void (*replies[])(response) = { dump, second_chance, marriage }; //// Номер в массиве указателей на функции совпадает с номером в перечеселнии enum response_type 0,1,2
int main()
{
	response r[] = {
		{"Mike", DUMP}, {"Luis", SECOND_CHANCE},
		{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}

	};
	int i;
	for (i = 0; i < 4; i++) {
		/*switch (r[i].type) {
		case DUMP:
			dump(r[i]);
			break;
		case SECOND_CHANCE:
			second_chance(r[i]);
			break;
		default:
			marriage(r[i]);
		}*/

		replies[r[i].type](r[i]);
	}
	return 0;
}