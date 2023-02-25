#include "main.h"
/**
 * print_most_numbers - prints all numbers between 0 and 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		else
		{
			_putchar(a + '0');
			a++;
		}
	}
	_putchar('\n');
}
