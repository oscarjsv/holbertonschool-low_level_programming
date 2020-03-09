#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Return nothing
 * struct dog - Pointer
 * @d: Pointer
 * @name: Pointer
 * @age: Pointer
 * @owner: Pointer
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
