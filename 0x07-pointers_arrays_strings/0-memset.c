#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: pointer
 * @b: byte
 * @n: integer
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
