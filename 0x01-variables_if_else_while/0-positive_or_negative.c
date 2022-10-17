#include <stdlib.h>
#include <time.h>
#include <studio.h>

/**
 * main - print a random num
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("is positive");
}
	if (n == 0)
{
	printf("is zero");
}
	if (n < 0)
{
	printf("is negative");
}
	return (0);
}
