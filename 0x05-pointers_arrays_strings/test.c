#include <stdio.h>
int main(void)
{
	char *str;

	str = "Test string";

	printf("value of str address : %s\n", str);
	printf("value of str[1] address : %p\n", &str[0]);
}
