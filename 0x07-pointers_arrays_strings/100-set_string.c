#include <stdio.h>
#include "main.h"

/**
  *set_string- function to set value of pointer to char
  *@s: pointer to pointer we need to set
  *@to: string to set
  */

void set_string(char **s, char *to)
{
	*s = to;
}
