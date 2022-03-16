#include "main"
/**
 * _islower - checks for lower case
 * @c: this is c
 *
 * Return: This returns nothing
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
