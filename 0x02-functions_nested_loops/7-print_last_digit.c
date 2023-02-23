#include "main.h"
/**
 * print_last_digit - prints the last digit  of n
 * @n : Input number
 * Return: Always r (success)
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (n < 0)

	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
