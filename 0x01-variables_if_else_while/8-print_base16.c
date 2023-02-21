#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the first digits of hexadecimal notation'
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char a = '0';
	char b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
