#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet both in lowercase and uppercase'
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 'a';

	if (a <= 'z')
	{
		putchar(a);
		a++;
	}
	else
	{
		a = 'A'
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
