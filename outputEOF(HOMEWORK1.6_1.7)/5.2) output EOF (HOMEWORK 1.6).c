#include <stdio.h>
/* �������� ��������� getchar() != EOF
   ��� ��������� 0, ���������� ������ Ctrl+D � Linux-e
   ��� Ctrl+Z � Windows HOMEWORK 1.6*/
main()
{
    int result;

    result = (getchar() != EOF);

    if (result == 0)
        printf("result = 0 \n");
    if (result == 1)
        printf("result = 1\n");
}