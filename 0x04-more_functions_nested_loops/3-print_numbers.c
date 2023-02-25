#include "main.h"
/**
 * print_numbers - prints all numbers between 0 and 9
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
