#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, last;
	for ( first = 0; first < 9; first++)
	{
		for (last = first + 1; last < 10; last++)
		{
			putchar(( first % 10) + '0');
			putchar((last % 10) + '0');

			if (first == 8 && last == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
