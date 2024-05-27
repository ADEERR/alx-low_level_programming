#include <stdio.h>

/**
 * main - print putchar.
 * Return: 0.
 */
int main(void)
{
	char *s;
	int i;

	s = "_putchar";
	i = 0;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

