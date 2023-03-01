#include "main.h"
/**
 * print_rev - prints the reverse of the inputed string
 * @s : Variable containing string to be reversed
 */
int _strlen(char *);
void print_rev(char *s)
{
	int i;
	int end;

	end = _strlen(s);
	for (i = end - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
