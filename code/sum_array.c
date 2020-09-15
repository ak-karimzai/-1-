#include <stddef.h>
#include <assert.h>
#include <math.h>
/// N
///
/// Maximum number of elemet in array
#define N 100
/// numbers
///
/// count's the sum of digits of inputed element
/***
* @file sum_array. c
* @fn int numbers(int number)
* @brief Считает сумму цифр числа.
* @param [in] number - Число.
* @param [out] sum - Сумма цифр.
* @return Возвращает сумму цифр числа.
*/

int numbers(int number)
{
    if (number < 0)
        number *= -1;

    int sum = 0;
    while (number)
    {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}
/// sum array
///
/// append's the sum of every element of a in same index to b array
/***
* @file sum_array. c
* @fn void display(const int *a, int *b, int n)
* @brief Заполняет массив сумм.
* @param [in] a - Массив чисел.
* @param [in] b - Массив сумм цифр чисел.
* @param [in] n - Длина массива чисел.
*/
void sum_array(const int *a, int *b, int n)
{
    assert (a != NULL);
    assert (n != 0);
    assert (n < N);

    for (int i = 0; i < n; i++)
        b[i] = numbers(abs(a[i]));
}