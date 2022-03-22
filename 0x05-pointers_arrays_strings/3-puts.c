#include "main.h"
#include <string.h>
/**
 * _puts - puts
 * @str: yes str
 *
 * Return: this returns
 */

void _puts(char *str)
{
	char a[] = *str;

	for (int i = 0; i < strlen(*str); i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
