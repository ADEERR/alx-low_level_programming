#include <stdio.h>

/**
 * main - print the alphabet in lower and upper.
 * Return: 0.
 */

int main(void)
{
	char *s;
	int i;

	s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

