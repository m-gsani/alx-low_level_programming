/**
 * _isalpha - determins if c is alphanumeric
 * @c : character to check
 * Return: 1 if alphanumeric 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
