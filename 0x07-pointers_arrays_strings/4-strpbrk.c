#include "holberton.h"
#include <stddef.h>
/**
 *_strpbrk - searching a string
 *@s: string
 *@accept: contain bytes
 *Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
unsigned int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return (NULL);
}
