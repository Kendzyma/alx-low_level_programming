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

    int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    lastDigit = (n % 10);
    if (lastDigit > 5 && n > 0) 
    {
        printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
    }
    else if (lastDigit > 5 && n < 0) 
    {
        printf("Last digit of %d is -%d and is less than 6 and not 0", n, lastDigit);
    }
    if (lastDigit < 6 && n > 0 && lastDigit != 0) 
    {
        printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
    }
    else if (lastDigit < 6 && n < 0 && lastDigit != 0) 
    {
        printf("Last digit of %d is -%d and is less than 6 and not 0", n, lastDigit);
    }
    else
    {
        printf("Last digit of %d is %d and is 0", n, lastDigit);
    }
    return (0);
}