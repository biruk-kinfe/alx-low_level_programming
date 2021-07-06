#include "holberton.h"
/**
 *_memset -fill a blockof memeory
 *@s: starting address
 *@b: the desired value
 *@n: number of bytes
 *Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
