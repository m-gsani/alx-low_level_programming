#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints single base 10 digits'
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
