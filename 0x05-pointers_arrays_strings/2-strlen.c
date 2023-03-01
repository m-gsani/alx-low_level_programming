/**
 * _strlen - prints the length of a string
 * @s : The input string
 * Return : Always i (success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
