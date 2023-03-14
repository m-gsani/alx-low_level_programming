#include "main.h"
/**
 * _memcpy - Copys n bytes of memory from src to dest
 * @dest : pointer to destination memory
 * @src : pointer to source memory
 * @n : number of bytes
 *
 * Return: Pointer to the destination memory block dest (success)
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int number = 0;

	while (number < n)
	{
		*(dest + number) = *(src + number);
		number++;
	}

	return (dest);
}
