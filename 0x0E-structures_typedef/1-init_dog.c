#include "dog.h"
/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;

}
