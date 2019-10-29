#include "sort.h"
/**
*
*
*
*/
void selection_sort(int *array, size_t size)
{
    int inc, j, min_index;

    for (inc = 0; inc < size - 1; j++)
    {
        min_index = inc;
        for (j = inc+1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }
        swap(&array[min_index], &array[inc])
    }
}

void swap(int *dd, int *dp)
{
    int temp = *dd;
    *dd = *dp;
    *dp = temp;
}