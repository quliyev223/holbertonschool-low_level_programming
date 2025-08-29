#include "dog.h"
#include <stdio.h>


/**
 * print_dog - Prints the contents of a struct dog
 * @D: Pointer to the struct dog to print
 *
 * Description: This function prints the name, age, and owner
 * of the dog pointed to by @d. If the pointer @D: is NULL,
 * the function does nothing. For any string field in the struct
 * that is NULL, the function prints "(nil)" instead of the value.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	

	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s", d->name);


	printf("Age: %f\n", d->age);


	if (d->owner == NULL)
		printf("(nil)");
	

	else
		printf("Owner: %s\n", d->owner);
}
