#include <stdio.h>
#include <stdbool.h> // Для булевых переменных

int main() {
    float x = 5.5f, y = 6.67f, res;

    res = x / y;
    printf("Result: %.2f\n", res); // % вывод переменной res, .2 - знаков после запятой f - тип переменной, \n - перенос строки

    //bool isHasCar = true;

    //// - 32 767 - 32 768
    //short s = 500;
    //
    //// 0 - 64 000
    //unsigned short a = 5;

    //// -2 млн - 2 млн
    //int x = 5;

    //// 0 - 4 млн
    //unsigned int x1 = 6;

    //long a1 = 5;
    //unsigned long a2 = 5;

    //long long a3 = 150;
    //unsigned long long a4 = 6;

    //float a5 = 4.53f;
    //double a6 = 5.12312314346534f;
    //// long double

    //char sym = '7';

    return 0;
}

