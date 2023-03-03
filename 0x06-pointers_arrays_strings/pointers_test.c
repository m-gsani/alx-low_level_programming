#include <stdio.h>

void random(char *str)
{
	*(str + 1) = 'O';
}
int main(void)
{
	char *string = "Hello World";
	char *ptr;
	
	printf("Value of string before operation: %s\n", string);
	*(&string[0]) = 'O';
	printf("Value of string after operation: %s\n", string);

	return (0);



}
