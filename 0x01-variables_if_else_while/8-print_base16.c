#include <stdio.h>

/**
 * main - print base16 .
 * Return: 0.
 */

int main(void)
{
	char *s;
	int i;

	s = "0123456789abcdef";
	i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
