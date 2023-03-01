#include "main.h"
/**
 *
 */

void rev_string(char *s)
{
	char *p;
	int i;
	int end;

	p = &s;
	end = _strlen(s);
	
	for (i = end-1; i >= 0; i--)
	{
		char temp;

		temp = *(p + i);
	}

}
