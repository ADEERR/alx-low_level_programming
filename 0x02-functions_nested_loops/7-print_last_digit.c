#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @n: number.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= (-1);
	return (n % 10);
}
