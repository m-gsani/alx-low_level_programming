#include "main.h"
/**
 * print_line - print the _ character the same number of times as n
 * @n : Number of times to print character
 */

void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
