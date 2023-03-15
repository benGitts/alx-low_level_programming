#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 *create_array- how to create array
 *@size: the size
 *@c: the character
 *
 *Return: this function return a pointer
 */
char *create_array(unsigned int size, char c)
{
char *p;
p = malloc(size * sizeof(c));
if (p == 0)
{
return (NULL);
}
return (p);
}
