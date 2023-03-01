#include "main.h"
/**
 * _puts - prints the value of a string variable
 * @c : input string variable
 */

void _puts(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
