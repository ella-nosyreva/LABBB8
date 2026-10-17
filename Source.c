#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x;
    double numerator = 1.0;
    double denominator = 1.0;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    int num_val = 1;
    int den_val = 2;

    for (int i = 1; i <= 6; i++)
    {
        numerator *= (x - num_val);
        denominator *= (x - den_val);
        num_val = num_val * 2 + 1;
        den_val = den_val * 2;
    }

    double result = numerator / denominator;

    printf("Значение ряда: %lf\n", result);

    return 0;
}