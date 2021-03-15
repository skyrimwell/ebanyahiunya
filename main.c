#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    letterCounter();
}
void letterCounter(){
    char symb ;
    int counter = 0;
    char arr[]={"Напас, Лавандос! Пачка папиро Прыщ на жопе волоснёй обросЯ не обсос, получи в ебасосОтветь скорее на мой главный вопрос:Яйца болят, стая котятТяжкие дни меня тяготятЯ - Александр Друсь, моё кредо - грустьЯ Кубу насрал на его барабан!Поле чудес, Рауль РамзесВ очке пылает адский замесКрутится дерьмо и сектор призИ мой хуй - он как кипарисКончита Вурст сосёт хуюрстНа бороде засох кусочек дерьма "}
    for (int i = 0; i < arr.lenght(); i++)
    {
        symb = arr[i];
        switch(symb){
            case ('А')||('а'):
                counter++;
                printf("Количество А: " + counter)
                counter = 0
            case ('Б')||('б'):
                counter++;
                printf("Количество Б: " + counter)
                counter = 0
            case ('В')||('в'):
                counter++;
                printf("Количество В: " + counter)
                counter = 0
            case ('Г')||('г'):
                counter++;
                printf("Количество Г: " + counter)
                counter = 0
            case ('Д')||('д'):
                counter++;
                printf("Количество Д: " + counter)
                counter = 0
        }
    };
    return 0;
}

int doubleletters(){
    int dlCounter = 0;
    for (int i = 0; i < sizeof(arr[]); i++)
        if (compareArray(arr[i]))&&(compareArray(arr[i+1]))
            dlCounter++;
        return dlCounter;
}
bool compareArray(char a)	{
    char vowel[]=["а","у","о","ы","э","я","ю","ё","и","е","А","У","О","Ы","Э","Я","Ю","Ё","И","Е"];
    int i;
    for(i=0;i<19;i++){
        if(a!=vowel[i])
            return 0;
    }
    return 1;

}

