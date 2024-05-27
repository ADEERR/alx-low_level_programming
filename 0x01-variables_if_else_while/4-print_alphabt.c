#include <stdio.h>

/**
 * main - print alphabet .
 * Return: 0.
 */

int main(void)
{
	char *s;
	int i;

	s = "abcdfghijklmnoprstuvwxyz";
	i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
