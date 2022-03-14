#include <stdio.h>
/**
 * main - Main function
 *
 * Return: This returns
 */
int main(void)
{
	int firstDigit = 0;

	while (firstDigit <= 9)
	{
		int secondDigit = firstDigit + 1;

		while (secondDigit <= 9)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');

			if (!(firstDigit == 8 && secondDigit == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		secondDigit++;
	}
	putchar('\n');
	return (0);
}
