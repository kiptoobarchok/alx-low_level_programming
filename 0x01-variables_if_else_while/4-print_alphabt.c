#include<stdio.h>

/**
 *main- prints alphabets without e and q
 *char
 *return : 0 (success)
 */

int main(void)
{
	char alphbt;

	for (alphbt = 'a' ; alphbt <= 'z' ; alphbt++)
	{

	if (alphbt == 'e')
	continue;

	else if (alphbt == 'q')
	continue;

	putchar(alphbt);
	}

	putchar('\n');

	return (0);

}

