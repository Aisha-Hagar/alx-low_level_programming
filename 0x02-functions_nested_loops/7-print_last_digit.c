#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int digit = _abs(n % 10);
	_putchar('0' + digit);
	return (digit);
}
