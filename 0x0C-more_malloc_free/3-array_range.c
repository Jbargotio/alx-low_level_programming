#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i;
	int len;
	int *s;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	s = malloc(len * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			s[i] = min + i;
		}
		return (s);
	}
}
