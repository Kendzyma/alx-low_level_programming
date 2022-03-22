#include "main.h"
#include <string.h>
/**
 * _strlen - puts
 * @s: yes str
 *
 * Return: this returns
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
