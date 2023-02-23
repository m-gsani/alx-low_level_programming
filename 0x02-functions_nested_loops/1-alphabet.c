#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: void
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
