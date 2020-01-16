#include "search_algos.h"
/**
 *
 *
 *
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
  int begin, end, middle, count;

  begin = 0;
  count = 0;
  end = size - 1;

  if (array == NULL)
    {
      return (-1);
    }

  while (begin <= end)
    {
      printf("Searching in array: ");
      for (count = begin; count <= end; count++)
	{
	  printf("%d", array[count]);
	  if (count < end)
	    printf(", ");
	}
      printf("\n");
      middle = (end + begin) / 2;

      if (value == array[middle])
	return (middle);
      if (value < array[middle])
	end = middle - 1;
      if (value > array[middle])
	begin = middle + 1;
    }
  return (-1);
}
