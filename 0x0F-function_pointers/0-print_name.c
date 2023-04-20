#include "function_pointers.h"
/**
 * print_name -  printing a name
 * @name: the name that will be print
 * @f: ptr to func
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
	if ((*f) == NULL && name == NULL)
	{
		return;
	}
}
