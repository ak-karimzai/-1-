#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "io_array.h"
#include "sort.h"
#include "sum_array.h"

/// main function
///
/// call's other function and do the main work
int main (void)
{
    int a[N];
    int b[N];
    int n = 0;
    int rc = ok;
    
    rc = read_array(a, &n);

    if (rc == ok)
    {
        sum_array(a, b, n);
        bubble_sort(a, b, n);
        display(a, n);
    }
    else
    {
        rc = error;
        printf("I/O error!");
    }
    
    return rc;
}
