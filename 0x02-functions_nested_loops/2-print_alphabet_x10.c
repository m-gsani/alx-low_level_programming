#include "main.h"
/**
 * print_alphabet_10x - prints the alphabet 10 times
 */

void print_alphabet_10x(void)
{
	int i = 0;
	int a;

	while (i <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
