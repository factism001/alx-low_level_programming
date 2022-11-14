#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure that stores information on dogs
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the dog owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
