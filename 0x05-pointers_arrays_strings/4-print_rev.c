#include "main.h"

/**
  * print_rev - prints string
  * @s: input string
  * Return: no return
 */

void print_rev(char *s)
{
	int rev = 0;

	while (*s != '\0')
	{
		s++;
		rev++;
	}

	while (rev > 0)
	{
		s--;
		_putchar(*s);
		rev--;
	}
	_putchar('\n');
}
