#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: first integer number
* @max: last integer number
* Return: int
*/
int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);
arr = malloc(sizeof(*arr) * ((max - min) + 1));

if (arr == NULL)
return (NULL);

for (i = 0; min <= max; min++, i++)
arr[i] = min;

return (arr);
}
