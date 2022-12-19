#include "main.h"

/**
 * puts_half - Entry point
 * @str: pointer
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int j;
	int k;

	for (j = 0; str[j] != '\0'; j++)
	{
	}
	j--;
	k = j % 2;
	j = (j - k) / 2;
	for (j = j + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
