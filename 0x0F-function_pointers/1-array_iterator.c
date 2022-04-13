#include "function_pointers.h"

/**
 * array_iterator - Executes a function given
 *                  as a parameter on each
 *                  element of an array.
 * @array: array to be worked on.
 * @size: size of array.
 * @action: pointer to function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned long int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(*array);
		array++;
		i++;
	}
}
