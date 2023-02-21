#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'prints the alphabet except q and e'
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lower_case = 'a';

	while (a <= 'z')
	{
		putchar(a);
		if ((a == 'q') || (a == 'e'))
		{
			++a;
		}
	}
	putchar('\n');

	return (0);
}
