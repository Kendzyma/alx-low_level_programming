#include <stdio.h>
/**
 * main - hello
 *
 * Return: hello
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}	
