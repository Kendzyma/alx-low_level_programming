#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: This function returns success
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
