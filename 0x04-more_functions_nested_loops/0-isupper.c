#include "main.h"

/**
 * _isupper - function that checks for uppercase
 *
 * @c: uppercase character.
 * Return: 1 if c is uppercase, 0 otherwise
 */

int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
