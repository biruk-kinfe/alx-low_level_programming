#include "holberton.h"
/**
 * print_triangle - print a traingle
 * @size: dementions of triangle
 * Return: nothing
**/
void print_triangle(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
_putcahr(' ');
for (j = i; j > 0; j--)
_putchar('#');
_putcahr('\n');
}
if (size < 1)
_putchar('\n');
}
