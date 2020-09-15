#include <assert.h>
#include <stddef.h>

/// N
///
/// Maximum number of elemet in array
#define N 100
/// sort function
///
/// function sorts elements by digit sum
/***
* @file sort. c
* @fn void bubble_sort(int *a, int *b, int n)
* @brief Сортирует по возрастанию массив сумм и массив чисел
* @param [in] a - Массив чисел.
* @param [in] b - Массив сумм.
* @param [in] n - Длина массива.
*/
void bubble_sort(int *a, int *b, int n)
{
    assert (a != NULL);
    assert (b != NULL);
    assert (n < N);
    assert (n != 0);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {   
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}