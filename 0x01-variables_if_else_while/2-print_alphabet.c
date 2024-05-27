#include <unistd.h>
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
	write(1, "\n", 1);
	return (0);
}

