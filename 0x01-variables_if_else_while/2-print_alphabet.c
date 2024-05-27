#include <unistd.h>

/**
 * ft_putchar - print all char.
 * @c : character.
 */
void ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

