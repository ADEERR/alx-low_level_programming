#include <stdio.h>

/**
 * main - print numbers .
 * Return: 0.
 */

int main(void)
{
	char *s;
	int i;

	s = "0123456789";
	i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
