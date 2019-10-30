#include "sort.h"
/**
*
*
*
*/
void radix_sort(int *array, size_t size)
{
    if (size == 0)
    {
        return;
    }
    int minValue = array[0];
    int maxValue = array[0];
    int i;
    for (i = 1; i < size; i++)
    {
        if (array[i] < minValue)
        {
            minValue = array[i];
        }
        else if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    int exponent = 1;
    while ((maxValue - minValue) / exponent >= 1)
    {
        CountingSortByDigit(array, radix, exponent, minValue);
        exponent *= radix;
    }
    
}
void CountingSortByDigit(int array[], int radix, int exponent, int minValued)
{
    
}