#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: This returns success
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
