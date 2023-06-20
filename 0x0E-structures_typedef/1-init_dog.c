#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *init_dog- function that initialize variable type struct dog
  *@d: struct dog
  *@name: dog's name
  *@age: its age
  *@owner: owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

