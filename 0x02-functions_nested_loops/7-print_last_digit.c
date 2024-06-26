#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @n: number.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	if (n == -2147483648)
		n = 8;
	if (n < 0)
		n *= (-1);
	_putchar((n % 10) + 48);
	return (n % 10);
}
