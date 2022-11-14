#ifndef _DOG_H
#define _DOG_H

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
	char owner;
} my_dog;

#endif
