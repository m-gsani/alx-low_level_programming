
/**
 * _isdigit - determines if a digit is between 0 and 9
 * @c : digit variable
 * Return : 1 or 0 if success
 *
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
