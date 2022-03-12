#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: This returns success
 */
int main(void)
{
	char a = 'a';

	for (a; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			a++;
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
