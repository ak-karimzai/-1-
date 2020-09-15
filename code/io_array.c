#include <stdio.h>

/// type error
///
/// the variables of enumerations for error type
enum type_error
{
    ok,
    error
};

/// read array
///
/// read the number of elements and elements from console if result is false return false value

/***
* @io_array файл.с
* @fn int read_array(int *a, int *n)
* @brief Вводит массив.
* @param [in, out] a-Массив.
* @param [in, out] n-Длина массива
* @return возврата код ошибки.
*/

int read_array(int *a, int *n)
{
    //printf("Input n: ");
    
    if (scanf("%d", n) != 1)
        return error;
    
    for (int i = 0; i < *n; i++)
    {
        int x;
        if (scanf("%d", &x) != 1)
            return error;
        a[i] = x;
    }
    
    return ok;
}

/// Display
///
/// function for display the array into screen

/***
* @io_array файл. с
* @fn void display(const int *a, int n)
* @brief Выводит массив.
* @param [in] a-Массив.
* @param [in] n-Длина массива.
*/
void display(const int *a, int n)
{
    //printf("Array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

