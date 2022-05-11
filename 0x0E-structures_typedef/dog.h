#ifndef FILE_DOG
#define FILE_DOG

/**
*struct dog - holds dog data
*@name: holds dogs name
*@age: Holds dogs age
*@owner: holds dog owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

