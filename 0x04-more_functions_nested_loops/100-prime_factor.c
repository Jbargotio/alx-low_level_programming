#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int y = 612852475143;
	long int x;

	for (x = 2; x < y; x++)
	{
		if (y % x == 0)
		{
			y = y / x;
		}
	}
	printf("%ld\n", x);
	return (0);
}
