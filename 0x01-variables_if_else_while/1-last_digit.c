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
<<<<<<< HEAD
	int n;
<<<<<<< HEAD
	int lastDigit;
=======
   	int lastDigit;

>>>>>>> 1d15de67eb6d56821e4cee8796d71c2c2c4654e9
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10);
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
<<<<<<< HEAD
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		prinf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
		return (0);
=======
    	}
    	else if (lastDigit < 6 && lastDigit != 0)
   	{
        	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
    	}
    	else
    	{
        	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
    	}
    		return (0);
=======
        int n;
        int lastDigit;

        srand(time(0));

	    n = rand() - RAND_MAX / 2;
        lastDigit = (n % 10);
        if (lastDigit > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
        }
        else if (lastDigit < 6 && lastDigit != 0)
        {
                prinf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
        }
        else
        {
                printf("Last digit of %d is %d and is 0\n", n, lastDigit);
        }
                return (0);
		prinf("hello");
>>>>>>> a7be573749333e6df2f9ca4ddc3bbc4dd2493166
>>>>>>> 1d15de67eb6d56821e4cee8796d71c2c2c4654e9
}
