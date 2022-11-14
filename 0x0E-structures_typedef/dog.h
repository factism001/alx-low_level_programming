#ifndef _DOG_H
#define _DOG_H

/**
  * my_dog - typedef for struct dog
  */
typedef struct dog my_dog;

/**
  * struct dog - structure that stores information on dogs
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the dog owner
  */
struct dog
{
	char *name;
	float age;
	char owner;
};

#endif
