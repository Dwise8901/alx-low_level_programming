#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input number
 * Return: diagonal
 */

void print_diagonal(int n)
{

int co, dw;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (co = 1; co <= n; co++)
{

for (dw = 1; dw < co; dw++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
