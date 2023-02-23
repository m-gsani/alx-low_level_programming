#include "main.h"
/**
 * print_last_digit - prints the last digit  of n
 * @a : Input number
 * Return: Always r (success)
 */

int print_last_digit(int a)
{
	int r;

	if (a <= 0)
	{
		r = (-a) % 10;
		return (r);
	}
	else
	{
		r = a % 10;
		return (r);
	}
}
