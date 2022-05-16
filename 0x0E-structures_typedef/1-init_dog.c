#include "dog.h"
/**
*init_dog - Initialize a dog structure
*@d: Dog structure to be initialized
*@name: Dog name
*@age: Dog age
*@owner: Dog owner
*
*Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
