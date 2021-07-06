#include "holberton.h"
#include <stddef.h>
/**
 *_strchr - locate a character
 *@s: string
 *@c: character
 *Return: pointer to a charcter
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
