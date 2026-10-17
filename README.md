# Лабораторная работа 8 (Вариант 10)

## Условие задачи
Вычислить с использованием цикла `for` значение ряда для заданного пользователем значения `x`. Условный оператор не использовать.
Формула:
(x - 1)(x - 3)(x - 7)...(x - 63) / (x - 2)(x - 4)(x - 8)...(x - 64)

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявить переменную `x` типа `double` для ввода.
3. Объявить `numerator = 1.0` и `denominator = 1.0` (для накопления произведений).
4. Объявить `num_val = 1` (для числителя) и `den_val = 2` (для знаменателя).
5. Запросить у пользователя значение `x`.
6. Запустить цикл `for` от `i = 1` до `6`:
   - Умножить `numerator` на `(x - num_val)`.
   - Умножить `denominator` на `(x - den_val)`.
   - Обновить `num_val = num_val * 2 + 1`.
   - Обновить `den_val = den_val * 2`.
7. Вычислить `result = numerator / denominator`.
8. Вывести результат на экран.
9. **Конец**

### Блок-схема
<img width="250" height="650" alt="Диаграмма8drawio drawio" src="https://github.com/user-attachments/assets/134260f9-75ae-43d7-867b-292fbe90a542" />

## 2. Реализация программы

```c
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
```
## 3. Результаты работы программы

**Пример 1: Ввод x = 10**

<img width="207" height="62" alt="image" src="https://github.com/user-attachments/assets/63422883-f390-4be6-a0c0-a4ebba31ccae" />

**Пример 2: Ввод x = 5**

<img width="230" height="63" alt="image" src="https://github.com/user-attachments/assets/4f699c76-4dcd-4490-976c-0b26172a3396" />

## 4. Информация о разработчике
Носырева Элла 
бОТИ-261
