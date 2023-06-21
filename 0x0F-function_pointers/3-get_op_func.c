#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
  *get_op_func- pointer function
  *@s:operator passed as arguement
  *
  *Return: NULL if s does not match (+,*,-,%,/) else pointer
  *to callback function
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
