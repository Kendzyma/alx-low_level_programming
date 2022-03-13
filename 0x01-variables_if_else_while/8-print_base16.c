#include <stdio.h>
/**
 * main - This is mian
 *
 * Return: Hello
 */
int main(void)
{
	char a = 'a';
	int b = 0;

	while (b <= 9)
	{
		putchar(b + '0');
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
