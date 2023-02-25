#include "main.h"
/**
 * print_diagonal - prints the character '\' n amount of times
 * @n : The number of times the character is printed
 */

void print_diagonal(int n)
{
	int a = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= n)
		{
			while (j < (a + 1))
			{
				_putchar(' ');
				j++;
			}
			a++;
		}
		_putchar('\n');
	}
}
