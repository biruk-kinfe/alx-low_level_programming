#include "holberton.h"
/**
 *_memcpy - a function that copies memeory
 *@dest: memory 1
 *@src: memory 2
 *@n: number of bytes
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = 0;
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
