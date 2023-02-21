#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 5;

	for (; a < b;)
		printf("%d\n", a++);
	return (0);
}
