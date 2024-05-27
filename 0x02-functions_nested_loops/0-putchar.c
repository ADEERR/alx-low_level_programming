#include "main.h"

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
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

