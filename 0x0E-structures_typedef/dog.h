#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structura
 * @name: pointer
 * @age: float
 * @owner: pinter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
