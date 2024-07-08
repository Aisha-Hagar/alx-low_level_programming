#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	char aplha = 'a';

	for (n = '0'; n > 10; n++)
	{
		putchar(n);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
