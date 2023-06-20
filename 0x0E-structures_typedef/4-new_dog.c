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
	dog_t *new_dog;
	int i, len_name, len_owner;

	new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}
	for (len_name = 0; name[len_name] ;  len_name++)
		;
	for (len_owner = 0; owner[len_owner] ;  len_owner++)
		;

	new_dog->name = malloc(len_name + 1);
	new_dog->owner = malloc(len_owner + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);

		return (NULL);
	}
	for (i = 0; i < len_name; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';

	for (i = 0; i < len_owner; i++)
	{
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	}

	new_dog->age = age;
	return (new_dog);
}
