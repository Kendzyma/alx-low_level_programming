#include "main.h"
#include <ctype.h>
/**
 * _isalpha - This is alpha
 * @c: The input
 *
 * Return: Returns no value
 */
int _isalphabet(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
