#include <stdio.h>
#include <string.h> //���������� ���������� string.h ��� ������ �� �������� � ��������� ��� ���

//��������� ������ � ���������� ������� ��������� ����� ��� ������ �� ����� ������� ���������. 
//����� �������� char tracks [5][80] ��� 5 ��� ������ ������� ���� ����� �� ������� ���� � 0 �� 4
// ������ ����� 80 ��� ���������� �������� � ������, ������� �� ����� ���� �� ��������� 79 ��� ��� ��� ���� ������ ��� ���� '\0' ���������� ������
char tracks[][80] = {

"I left my heart in Harvard Med School",
"Newark,Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};


void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {            //������� ���� ������ ��������� ��������� str2 � ������ str1.
            printf("Track %i:'%s'\n", i + 1, tracks[i]);//i+1 � �������� ����� ���� �� ������� �� 0 ���� ����� =�
        }



    }
}
int main()
{
    // 1)char* p;
    char search_for[80];
    printf("Search for:");
    //fgets  (����� ���� �����, ������, �������� ������ ��������� ���-� )
    fgets(search_for, 80, stdin); //������ �����, ������� ����� ������ � ������ ������

    //���� ��������� ��������� ������ ���� '\n' ����� ����� � ����� ������
    // 1)if (p = strchr(search_for, '\n')) *p = 0;
    // 2)search_for[strlen(search_for) - 1] = '\0';
    /* 3)size_t n = strlen(search_for);
    if (n > 0 && search_for[n - 1] == '\n')
    search_for[n - 1] = '\0';*/
    search_for[strcspn(search_for, "\n")] = '\0';
    find_track(search_for);
    return 0;
}