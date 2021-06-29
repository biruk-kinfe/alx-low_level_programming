#include "holberton.h"
#include <unistd.h>
/**
 * _puts - prints a string
 * @str: value to be evaluate
 * Return: not.
 */
void _puts(char *str)
{
int l = 0;
while (*(str + 1) != '\0')
{
_putchar(str[1]);
l++;
}
_putchar('\n');
}
