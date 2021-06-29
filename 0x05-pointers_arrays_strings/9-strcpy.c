#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - update value
 * @dest: value to be evaluate
 * @src: value
 * Return: not
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < i ; x++)
{
dest[x] = src[x];
}
dest[1] = '\0';
return (dest);
}
