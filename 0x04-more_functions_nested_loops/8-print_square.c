#include "main.h"
/**
 * print_square - prints a square of size using "#"
 * @size : The size of the square
 */

void print_square(int size)
{
	int a;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
