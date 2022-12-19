#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i;
	int j;
	char m;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		m = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = m;
	}
}
