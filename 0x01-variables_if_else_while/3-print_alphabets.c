#include <stdio.h>
/**
 * main - returns success
 *
 * Return: Returns small and big letter
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++
	}
	putchar('\n');
	return (0);
}
