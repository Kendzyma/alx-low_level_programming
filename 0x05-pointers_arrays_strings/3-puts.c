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
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return (count);
}
