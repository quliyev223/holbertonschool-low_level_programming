#include "dog.h"
#include <stdio.h>


/**
 * _strlen - return the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;


	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * new_dog - Creates a new dog
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (string)
 *
 * Return: Pointer to the new dog_t structure,
 * or NULL if memory allocation fails or any parameter is invalid.
 *
 * Description: This function allocates memory for a new dog_t structure,
 * creates a copy of the name and owner strings, assigns the age,
 * and returns a pointer to the new dog. If allocation fails at any step,
 * it cleans up and returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	

