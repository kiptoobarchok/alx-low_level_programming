#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;

	unsigned int result = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{

		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

