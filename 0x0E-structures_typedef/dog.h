#ifndef DOG_H
#define DOG_H

typedef struct dog dog_name;
/**
  *struct dog - structure that stores info
  *@name: dog's  name
  *@age: age of the dog
  *@owner: dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_name *new_dog(char *name, float age, char *owner);
void free_dog(dog_name *d);

#endif
