#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) == 0)
	{printf("Last digit of %d is 0\n"); }
	else if ((n % 10) > 5)
	{printf("last digit of %d is 5\n", n, n % 10); }
	else
	{printf("Last digit of %d is 0\n", n, n % 10); }
	return (0);
}