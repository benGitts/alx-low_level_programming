#include "main.h"
/**
* _strlen - Counts length of string
* @s: pointer parameter
* Return: integer value
*/
int _strlen(char *s)
{
	int c, i;

	c = 0;
	i = 0;
	while (s[i] != 0)
	{
	c++;
	i++;
	}
	return (c);
}
