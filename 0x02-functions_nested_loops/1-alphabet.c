#include "main.c"

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
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
