#include "main.h"

/**
 * _islower - check for lowercase.
 * @c: integer parameter.
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
