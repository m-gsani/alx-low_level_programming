#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet both in lowercase and uppercase'
 * Return: Always 0 (success)
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	if (lower_case < 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case < 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');

	return (0);
}
