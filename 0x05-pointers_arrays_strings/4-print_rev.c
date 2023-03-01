#include "main.h"
/**
* print_rev - prints reverse string
* @s: Pointer character
*/
void print_rev(char *s)
{
	int i, n, x;

	i = 0, n = 0;
	while (s[i])
	{
	n++;
	i++;
	}
	x = n - 1;
	while (x >= 0)
	{
	_putchar(s[x]);
	x--;
	}
	_putchar('\n');
}
