#include <stdio.h>
#include <time.h>
/* FUnction that determines if number is positive negative or zero */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0;)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0;)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
