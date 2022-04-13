#include "function_pointers.h"

/**
 * int_index- Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise index of the first element for which
 *         the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		i = 0;
		while (!(cmp(*array)))
		{
			array++;
			i++;
		}
		return (i);
	}
}
