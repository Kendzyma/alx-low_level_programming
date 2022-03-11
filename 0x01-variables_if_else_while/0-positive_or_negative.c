#include <stdio.h>
#include <stdlib.h>
/**
 * main - this method prints a result if its negative or positive
 *
 * Return: This method does not return any value
 */
int main(void)
{
	int n = rand();

	if (n < 0)
	{
		printf("%d: is negative",n);
	}

	else if (n > 0)
	{
		printf("%d: is postive",n);
	}
	else
	{
		printf("%d: is zero",n);
	}
	return (0);
}
