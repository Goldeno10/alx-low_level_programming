#include "dog.h"
#include <stdlib.h>
/**
*new_dog - Creats a dog
*@name: holds dogs name
*@age: Holds dogs age
*@owner: holds dog owner name
*Return: A dog profile
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0, c;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(i * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c <= i; c++)
		dog->name[c] = name[c];
	dog->age = age;
	dog->owner = malloc(j * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c <= j; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
