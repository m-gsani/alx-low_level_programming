#include "main.h"
/**
 * _memset - Fills the first n bytes of memory pointed to by s with  b
 * @s : Pointer to the memory address
 * @b : byte to be fill in memory
 * @n : The number of bytes to fill with the constant byte b
 *
 * Return: The pointer to the edited piece of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int number = 0;

	while (number < n)
	{
		*(s + number) = b;
		number++;
	}
	return (s);

}
