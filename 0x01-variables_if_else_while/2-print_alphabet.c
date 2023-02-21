#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Fucntion that prints the lowercase alphabet'
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
