#include <stdio.h>
/* Проверка выражения getchar() != EOF
   Для получения 0, необходимо нажать Ctrl+D в Linux-e
   или Ctrl+Z в Windows HOMEWORK 1.6*/
main()
{
    int result;

    result = (getchar() != EOF);

    if (result == 0)
        printf("result = 0 \n");
    if (result == 1)
        printf("result = 1\n");
}