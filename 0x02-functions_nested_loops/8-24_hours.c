#include "main.h"
/**
 * jack_bauer - prints all minutes in 24 hour format
 */

void jack_bauer(void)
{
	int n;
	int j;

	for (n = 0; n < 24; n++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}
