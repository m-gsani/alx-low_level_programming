#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints all singel digit base 10 numbers'
 * Return: Alwyas 0 (success)
 *
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');

	return (0);
}
