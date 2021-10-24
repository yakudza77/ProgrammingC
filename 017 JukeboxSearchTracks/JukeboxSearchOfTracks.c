#include <stdio.h>
#include <string.h> //Подключает библиотеку string.h для работы со строками и функциями для них

//Поместили массив в глобальную область видимости чтобы был доступ из любой функции программы. 
//Можно написать char tracks [5][80] где 5 это размер массива всех строк но индексы идут с 0 до 4
// Вторая цифра 80 это количество символов в строке, которое на самом деле не превышает 79 так как ещё есть резерв под знак '\0' завершение строки
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
        if (strstr(tracks[i], search_for)) {            //Функция ищет первое вхождение подстроки str2 в строке str1.
            printf("Track %i:'%s'\n", i + 1, tracks[i]);//i+1 в реальной жизни люди не считают от 0 свои треки =Р
        }



    }
}
int main()
{
    // 1)char* p;
    char search_for[80];
    printf("Search for:");
    //fgets  (буфер куда пишем, размер, источник откуда поступает инф-я )
    fgets(search_for, 80, stdin); //Вводим текст, который будем искать в списке треков

    //Есть несколько вариантов убрать знак '\n' после ввода в конце строки
    // 1)if (p = strchr(search_for, '\n')) *p = 0;
    // 2)search_for[strlen(search_for) - 1] = '\0';
    /* 3)size_t n = strlen(search_for);
    if (n > 0 && search_for[n - 1] == '\n')
    search_for[n - 1] = '\0';*/
    search_for[strcspn(search_for, "\n")] = '\0';
    find_track(search_for);
    return 0;
}