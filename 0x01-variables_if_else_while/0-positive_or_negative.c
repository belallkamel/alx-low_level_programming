#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Enrty level - main
 *
 * Description: a orogram that sees if the number is positive or negative
 *
 * Return: 0 success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive", n);
	else if (n < 0)
		printf("%i is negative", n);
	else
		printf("%i is zero", n);
	return (0);
}
