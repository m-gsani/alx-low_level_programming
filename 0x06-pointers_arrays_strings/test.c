#include <stdio.h>
#include "main.h"
int main(void)
{
	char *first = "Hello ";
	char *last = "World!";
	char *p;

	printf("Value of first variable before function call: %s\n", first);

	p = _strcat(first, last);

	printf("Value of first variable after function call: %s\n", first);

	return (0);
}
