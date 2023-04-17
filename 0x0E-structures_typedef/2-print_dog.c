#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
    	if (d == NULL)
		 return;

	if (d->name == NULL)
               printf("Name: (nil)\n";
	else
               printf("Name: %s\n", d->name);

        if (d->age < 0)
               printf("Age:(nil)\n");
        else
	       printf("Age:%f\n", d->age);
	
	if (d->owner == Null)
               printf("Owner:(nil)\n");
	else
               printf("owner:%s\n", d->owner);
}	       
