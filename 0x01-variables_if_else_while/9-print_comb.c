#include <stdio.h>

/**
 * main - print comb .
 * Return: 0.
 */

int main(void)
{
        char *s;
        int i;

        s = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
        i = 0;
        while (s[i])
        {
                putchar(s[i]);
                i++;
        }
        putchar('\n');
        return (0);
}
