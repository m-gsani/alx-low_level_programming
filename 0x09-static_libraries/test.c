#include <stdio.h>

void _meme(int *s, int b, int n)
{
	int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
}

int main(void)
{
	int s[] = {1,2,3,4,5,6};
	int b = 1;
	int n = 5;
	int *ptr;
	int i;
	int j;

	ptr = s;

	for(i = 0; i < 5; i++) {
		printf("Value of s[%d] before function call is : %d\n", i, s[i]);
	}
	_meme(ptr, b, n);
	for (j = 0; j < 5; j++) {
		printf("Value of s[%d] after function call is : %d\n", j, s[j]);
	}
	return (0);


}
