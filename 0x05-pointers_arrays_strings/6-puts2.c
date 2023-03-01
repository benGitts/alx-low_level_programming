#include "main.h"
/**
* puts2 - prints every other character of string
* @str: pointer character
*/
void puts2(char *str)
{
	int i, n, x;

	i = 0;
	n = 0;
	while (str[i])
	{
	i++;
	n++;
	}
	for (x = 0 ; x < n ; x++)
	{
	_putchar(str[x]);
	x++;
	}
	_putchar('\n');
}
