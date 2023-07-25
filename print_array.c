#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an arr of ints
 *
 * @array: The arr to be printed
 * @size: Num of elems in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
