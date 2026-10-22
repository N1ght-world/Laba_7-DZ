#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int Task1();
int Task2();
int DZ_Laba_7();

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    
    DZ_Laba_7();

    return 0;
}

int Task1()
{
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        printf("Это буква\n");
        break;
    default:
        printf("Неизвестный символ\n");
    }

    return 0;
}

int Task2()
{
    float x, y;
    char c;

    printf("\nВведите выражение (например, 5*3): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
        printf("=%f\n", x / y);
        break;
    case '^':
        printf("=%f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция\n");
    }

    return 0;
}

int DZ_Laba_7()
{
    int total_kopecks;
    printf("Введите стоимость покупки в копейках: ");
    scanf("%d", &total_kopecks);

    int rubles = total_kopecks / 100;
    int kopecks = total_kopecks % 100;

    printf("%d ", rubles);
    if (rubles % 100 >= 11 && rubles % 100 <= 14) {
        printf("рублей");
    }
    else if (rubles % 10 == 1) {
        printf("рубль");
    }
    else if (rubles % 10 >= 2 && rubles % 10 <= 4) {
        printf("рубля");
    }
    else {
        printf("рублей");
    }

    printf(" ");

    printf("%d ", kopecks);
    if (kopecks % 100 >= 11 && kopecks % 100 <= 14) {
        printf("копеек");
    }
    else if (kopecks % 10 == 1) {
        printf("копейка");
    }
    else if (kopecks % 10 >= 2 && kopecks % 10 <= 4) {
        printf("копейки");
    }
    else {
        printf("копеек");
    }

    printf("\n");

    return 0;
}
