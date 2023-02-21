#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet in lower case and reverse'
 * Return: Alwyas 0 (success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
