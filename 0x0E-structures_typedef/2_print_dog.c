#include "dog.h"
#include <stdlib.h>
/**
*print_dog - prints a dog properties
*@d: dog struct
*/
void print_dog(struct dog *d);
{
	if (d == NULL)
	{
		printf();
	}
	else
	{
		(d.name != NULL)? printf("%s", d.name): printf("(nil)");
		(d.age != NULL)? printf("%f", d.age): printf("(nil)");
		(d.name != NULL)? printf("%s",d.owner): printf("(nil)");
	}

}
