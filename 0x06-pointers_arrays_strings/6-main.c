#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for holbertonschool students
 *
 * Return: Always 0
 */
int main(void)
{
char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 012356hello world\thello world.hello world\n";
char *p;
p = cap_string(s);
printf("%s", p);
printf("%s", s);
return (0);
}