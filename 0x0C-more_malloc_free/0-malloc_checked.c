#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *t;
	unsigned int *s;

	s = &b;
	t = malloc(sizeof (*s));
	if(t == NULL)
	{
		exit(98);
	}
	else
	{
		return(t);
	}
	free(t);
}
