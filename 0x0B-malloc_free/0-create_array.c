#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 *create_array- create array
 *
 *
 *Return: this function return a pointer
 */
char *create_array(unsigned int size, char c)
{
char *p;
p = malloc(size * sizeof(c));
if (p == NULL)
{
return (0);
}
return (p);
}
