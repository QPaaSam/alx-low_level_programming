#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 * Return: returns nothing
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 97; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d, ", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}
