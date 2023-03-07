#include "main.h"
/**
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
