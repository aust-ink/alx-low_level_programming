#include "main.h"
/**
<<<<<<< HEAD
 * main - Entry block
 * Description prints _putchar on new line
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n);
=======
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

>>>>>>> aa3a7862a4cd392da4c3e65e40315ef64780b7fa
	return (0);
}
