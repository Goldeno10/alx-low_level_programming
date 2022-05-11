#include <stdlib.h>
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
