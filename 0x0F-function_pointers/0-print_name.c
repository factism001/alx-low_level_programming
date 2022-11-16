#include "function_pointers.h"
/**
  * print_name - print name from function pointer
  * @name: the string to pass
  * @f: pointer to function
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
