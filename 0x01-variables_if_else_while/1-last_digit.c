#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - check last digit.
* Return:0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	if (n < 0)
	{
		n *= (-1);
		printf("-");
		printf("%d is -%d and is less than 6 and not 0\n", n, n % 10);
	}
	else if ((n % 10) > 5)
	{
		printf("%d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("%d is %d and is 0\n", n, n % 10);
	}
	else if ((n % 10) < 6)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	/* your code goes there */
	return (0);
}
