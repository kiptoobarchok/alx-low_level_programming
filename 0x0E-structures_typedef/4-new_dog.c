#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - creates new dog
  *@name: name
  *@age: dogs age
  *@owner: its owner
  *
  *Return: NULL if it fails, else struct dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;
	int i, len_name, len_owner;

	ptr = malloc(sizeof(struct dog));

	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}
	for (len_name = 0; name[len_name] ;  len_name++)
		;
	for (len_owner = 0; owner[len_owner] ;  len_owner++)
		;

	ptr->name = malloc(len_name + 1);
	ptr->owner = malloc(len_owner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);

		return (NULL);
	}
	for (i = 0; i < len_name; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->name[i] = '\0';

	for (i = 0; i < len_owner; i++)
	{
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	}

	ptr->age = age;
	return (ptr);
}
