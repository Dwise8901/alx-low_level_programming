#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + i) = '\0';
	return (start);
}
