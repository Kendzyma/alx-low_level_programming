#include <stdio.h>
/**
 * main - main method
 *
 * Return: This returns a value
 */
int main(void)
{
	int firstDigit = 0;

	while (firstDigit <= 9)
	{
		int secondDigit = firstDigit + 1;

		while (secondDigit <= 9)
		{
			int thirdDigit = secondDigit + 1;

			while (thirdDigit <= 9)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				putchar(thirdDigit + '0');
				if (!(firstDigit == 7 && secondDigit == 8 && thirdDigit == 9))
				{
					putchar(',');
					putchar(' ');
				}
				thirdDigit++;
			}
			secondDigit++;

		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
