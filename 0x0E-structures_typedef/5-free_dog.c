#include <stdlib.h>
#include "dog.h"
/**
*free_dog - Frees allocated dog memory
*@d: dog structure
*Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
