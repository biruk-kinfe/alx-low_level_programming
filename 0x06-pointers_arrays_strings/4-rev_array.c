#include "holberton.h"
/**
 * reverse_array - reverse array of integer
 * @a: arryay
 * @n: number of element
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n--; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
