#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';
											while (x <= 'z')
		{
	if (x != 'e' && x != 'q')
	{
		putchar(x);
	}
	x++;
		}
	putchar('\n');
return (0);
}
