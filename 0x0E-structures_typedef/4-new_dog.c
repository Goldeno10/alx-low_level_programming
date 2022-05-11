#include "main.h"
/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

/**
*struct dog - holds dog data
*@name: holds dogs name
*@age: Holds dogs age
*@owner holds dog owner name
*/
struct dog {
	char *name;
	float age;
	char *owner;
}
/**
*new_dog - Creats a dog
*@name: holds dogs name
*@age: Holds dogs age
*@owner holds dog owner name
*Return: A dog profile
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog -> name = name;
	dog -> age = age;
	dog -> owner = owner;

	return(dog);
}
