#include <stdio.h>

/**
 * main - Prints alphabet letters in lower case
 * char
 * return :0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
