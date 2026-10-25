#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int Task1(char c);
float calculateExpression(float x, char op, float y);
void printCurrency(int total_kopecks);

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    /* --- Task_1 --- */
    char c;
    printf("Введите символ: ");
    scanf(" %c", &c);

    int result1 = Task1(c);
    switch (result1)
    {
    case 1: printf("Это цифра\n"); break;
    case 2: printf("Это буква\n"); break;
    default: printf("Неизвестный символ\n"); break;
    }

    /* --- Task_2 --- */
    float x, y, result;
    char op;
    printf("\nВведите выражение (например, 5*3): ");
    scanf("%f %c %f", &x, &op, &y);

    result = calculateExpression(x, op, y);
    if (result != -1.0f)
    {
        printf("= %.6f\n", result);
    }

    /* --- DZ_Laba_7 --- */
    int total_kopecks;
    printf("\nВведите стоимость покупки в копейках: ");
    scanf("%d", &total_kopecks);
    printCurrency(total_kopecks);

    return 0;
}

/* --- Task_1 --- */
int Task1(char c)
{
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
        return 1; /* Цифра */

    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j':
    case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't':
    case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J':
    case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T':
    case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
        return 2; /* Буква */

    default:
        return 0; /* Неизвестный символ */
    }
}

/* --- Task_2 --- */
float calculateExpression(float x, char op, float y)
{
    switch (op)
    {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/':
        if (y == 0.0f)
        {
            printf("Ошибка: деление на ноль\n");
            return -1.0f;
        }
        return x / y;
    case '^': return powf(x, y);
    default:
        printf("Неизвестная операция\n");
        return -1.0f;
    }
}

/* --- DZ_Laba_7 --- */
void printCurrency(int total_kopecks)
{
    int rubles = total_kopecks / 100;
    int kopecks = total_kopecks % 100;

    printf("%d ", rubles);
    if (rubles % 100 >= 11 && rubles % 100 <= 14)
    {
        printf("рублей ");
    }
    else
    {
        switch (rubles % 10)
        {
        case 1: printf("рубль "); break;
        case 2: case 3: case 4: printf("рубля "); break;
        default: printf("рублей "); break;
        }
    }

    printf("%d ", kopecks);
    if (kopecks % 100 >= 11 && kopecks % 100 <= 14)
    {
        printf("копеек");
    }
    else
    {
        switch (kopecks % 10)
        {
        case 1: printf("копейка"); break;
        case 2: case 3: case 4: printf("копейки"); break;
        default: printf("копеек"); break;
        }
    }

    printf("\n");
}
