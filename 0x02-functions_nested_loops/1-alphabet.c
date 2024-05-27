#include "main.h"

/**
 * print_alphabet - print the elphabet.
 */

void print_alphabet(void)
{
	char *s;
	int i;

	s = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
