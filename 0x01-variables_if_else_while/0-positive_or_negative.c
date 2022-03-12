#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this method prints a result if its negative or positive
 *
 * Return: This method does not return any value
 */
int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d: is negative\n", n);
	}

	else if (n > 0)
	{
		printf("%d: is postive\n", n);
	}
	else
	{
		printf("%d: is zero", n);
	}
	return (0);
}
