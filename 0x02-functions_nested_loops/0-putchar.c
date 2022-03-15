#include "_putchar.h"
/**
 * _putchar - writes the character c to stdout
 *
 * Return: always 0 (success)
 */
int _putchar(void)
{
	Char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
