#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


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
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0'; /* add null terminator at the end */
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
	dog_t *dog;
	int len_name, len_owner;


	/* allocate memory and copy the name */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* allocate memory and copy the name */
	len_name = _strlen(name);
	dog->name = malloc(len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	/* allocate memory and copy the owner */
	len_owner = _strlen(owner);
	dog->owner = malloc(len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	/* assign the age */
	dog->age = age;

	return (dog);
}


