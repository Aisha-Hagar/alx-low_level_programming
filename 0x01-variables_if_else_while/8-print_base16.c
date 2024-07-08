#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	char alpha = 'a';

	while (n < '10')
	{
		putchar(n);
		n++;
	}

	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
