#include "main.h"
/**
* puts_half - prints second half of string
* @str: Pointer character
*/
void puts_half(char *str)
{
	int i, n, x;

	i = 0;
	n = 0;
	while (str[i])
	{
	i++;
	n++;
	}
	if (n % 2 == 0)
	x = n / 2;
	else
	x = ((n - 1) / 2) + 1;
	while (str[x])
	{
	_putchar(str[x]);
	x++;
	}
	_putchar('\n');
}
