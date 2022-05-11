#include "dog.h"
#include <stdio.h>

/**
*print_dog - prints a dog properties
*@d: dog struct
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		(d->name) ? printf("Name: %f\n", d->name) : printf("Name: (nil)\n");
		(d->age) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}

}
