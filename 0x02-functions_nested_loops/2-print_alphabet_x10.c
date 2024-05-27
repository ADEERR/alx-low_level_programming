#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x 10.
 */
void print_alphabet_x10(void)
{
	char *s;
	int i;
	int j;

	s = "abcdefghijklmnopqrstuvwxyz";
	j = 0;
	while (j < 10)
	{
		i = 0;
		while (s[i])
		{
			_putchar(s[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
