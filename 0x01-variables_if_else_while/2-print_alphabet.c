#include <stdio.h>

/**
 * main - print the alphabet in lowercase .
 * Return: alwayz 0 .
 */

int main(void)
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
	return (0);
}

