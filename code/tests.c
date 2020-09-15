#include <stdio.h>
#include "sort.h"
#include "sum_array.h"


/**
 * \fn void check_if_sortd_array(int *element_array, int *digit_sum_array, int *check_sort, int num)
 * \brief Функция которая выводит результат тестирования алгоритм сортирование.
 * 
 * \param [in] element_array Array of elements.
 * \param [in] digit_sum_array Array of digits for save the sum of digits.
 * \param [in] num Number of elements in array.
 * \return True or false value.
 */
/// check_if_sortd_array
///
/// function will shows the result of sort algorithm
int check_if_sortd_array(int *element_array, int *digit_sum_array, int num)
{
    // initialize the test checker with True value 1
    int check_sort = 1;
    // checking if sorted array  
    bubble_sort(element_array, digit_sum_array, num);
    for (int i = 0; i < num - 1; i++)
        if (numbers(element_array[i]) > numbers(element_array[i + 1]))
            check_sort = 0;
    return check_sort;
}


/**
 * \fn void check_if_digit_sum_is_true(int *element_array, int *digit_sum_array, int *check_digit_sum, int num)
 * \brief Функция которая выводит результат тестирования для функции добавления суммы цифр чисел в массив.
 *
 * \param [in] element_array Array of elements.
 * \param [in] digit_sum_array Array of digits for save the sum of digits.
 * \param [in] num Number of elements in array.
 * \return True or false value.
 */

/// check_if_digit_sum_is_true
///
/// function will shows the result sum array function return's the true or false value

int check_if_digit_sum_is_true(int *element_array, int *digit_sum_array, int num)
{
    // initialize the test checker with True value 1
    int check_digit_sum = 1;

    // adding to array digit sum and check for validiting
    sum_array(element_array, digit_sum_array, num);
    for (int i = 0; i < num; i++)
        if (digit_sum_array[i] != numbers(element_array[i]))
            check_digit_sum = 0;
    return check_digit_sum;
}

/**
 * \fn int check_if_digit_sum_function_works(int *element_array, int *digit_sum_array, int *arr_for_appending_sum, int num)
 * \brief Функция которая выводит результат тестирования для функции считания суммы цифр чисел в массив.
 *
 * \param [in] element_array Array of elements.
 * \param [in] digit_sum_array Array of digits for save the sum of digits.
 * \param [in] num Number of elements in array.
 * \return True or false value.
 */

/// check_if_digit_sum_function_works
///
/// function will shows the result digit sum functions return's the true or false value
int check_if_digit_sum_function_works(int *element_array, int *digit_sum_array, int num)
{
    int check_if_digit_sum_fun_works = 1;
    int arr_for_appending_sum[num];
    for (int i = 0; i < num; i++)
        arr_for_appending_sum[i] = numbers(element_array[i]);
    
    for (int i = 0; i < num; i++)
        if (arr_for_appending_sum[i] != digit_sum_array[i])
            check_if_digit_sum_fun_works = 0;
    return check_if_digit_sum_fun_works;
}

/**
 * \brief function, which call's other function's.
 */

int main()
{
    int num_of_elements;
    int passed_tests_for_sort = 0, passed_tests_for_digit_sum = 0, passed_tests_for_digit_sum_function = 0;

    // Array with one element
    int elem_arr[1] = { 55 };
    int digit_arr[1] = { 10 };
    num_of_elements = 1;
    passed_tests_for_sort += check_if_sortd_array(elem_arr, digit_arr, num_of_elements);
    passed_tests_for_digit_sum += check_if_digit_sum_is_true(elem_arr, digit_arr, num_of_elements);
    passed_tests_for_digit_sum_function += check_if_digit_sum_function_works(elem_arr, digit_arr, num_of_elements);

    
    // Sorted Array
    int elem_arr_sorted[] = { 11, 22, -33, 44, -55 };
    int digit_arr_sorted[] = { 2, 4, 6, 8, 10 };
    num_of_elements = 5;
    passed_tests_for_sort += check_if_sortd_array(elem_arr_sorted, digit_arr_sorted, num_of_elements);
    passed_tests_for_digit_sum += check_if_digit_sum_is_true(elem_arr_sorted, digit_arr_sorted, num_of_elements);
    passed_tests_for_digit_sum_function += check_if_digit_sum_function_works(elem_arr_sorted, digit_arr_sorted, num_of_elements);


    // Back sorted array
    int elem_arr_back_sorted[] = { 333, -33, 5, 3, 1};
    int digit_arr_back_sorted[] = { 9, 6, 5, 3, 1 };
    num_of_elements = 5;
    passed_tests_for_sort += check_if_sortd_array(elem_arr_back_sorted, digit_arr_back_sorted, num_of_elements);
    passed_tests_for_digit_sum += check_if_digit_sum_is_true(elem_arr_back_sorted, digit_arr_back_sorted, num_of_elements);
    passed_tests_for_digit_sum_function += check_if_digit_sum_function_works(elem_arr_back_sorted, digit_arr_back_sorted, num_of_elements);

    
    // Random Array
    int elem_arr_random[] = { 1, -5, 2, -4, 3 };
    int digit_arr_random[] = { 1, 5, 2, 4, 3 };
    num_of_elements = 5;
    passed_tests_for_sort += check_if_sortd_array(elem_arr_random, digit_arr_random, num_of_elements);
    passed_tests_for_digit_sum += check_if_digit_sum_is_true(elem_arr_random, digit_arr_random, num_of_elements);
    passed_tests_for_digit_sum_function += check_if_digit_sum_function_works(elem_arr_random, digit_arr_random, num_of_elements);

    printf("passed %d from 4 tests for digit sum.\n", passed_tests_for_digit_sum);
    printf("passed %d from 4 tests for sort.\n", passed_tests_for_sort);
    printf("passed %d from 4 tests for digit sum function.\n", passed_tests_for_digit_sum_function);

    return 0;
}