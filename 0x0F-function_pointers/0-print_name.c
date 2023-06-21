#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_name - function to print name
  *@name: name
  *@f: pointer
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
