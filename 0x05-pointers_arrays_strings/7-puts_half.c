#include "main.h"
/**
 * puts_half - prints out the second half of a string
 * @str : Input string
 */

void puts_half(char *str)
{
	int i;
	int length;
	int n;

	length = 0

        while (str[lenght] != '\0')
        {
                length++;
        }

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');

	}
}
