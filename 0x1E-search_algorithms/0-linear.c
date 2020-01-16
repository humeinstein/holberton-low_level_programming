#include "search_algos.h"
/**
 * linear_search - searches for value in array/ linear search
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to find
 * Return: first index where located or -1 for fail
 */
int linear_search(int *array, size_t size, int value)
{
  size_t check = 0;
  
 
  if (array == NULL)
    return(-1);
  for (; check < size; check++)
    {
      printf("Value checked array[%lu] = [%d]\n", check, array[check]);
      if (array[check] == value)
	return (check);
    }
  return (-1);
}
