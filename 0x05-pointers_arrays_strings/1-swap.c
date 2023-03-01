/**
 * swap_int - swaps the value of 2 integer variables passed to it
 * @a : pointer of the first variable
 * @b : pointer of the second vairable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
