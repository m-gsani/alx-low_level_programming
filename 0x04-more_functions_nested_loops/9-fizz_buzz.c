#include <stdio.h>
/**
 * fizzbuzz - performs the fizzbuzz test
 */

void fizzbuzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("fizz");
			printf(" ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("buzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzbuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
}
