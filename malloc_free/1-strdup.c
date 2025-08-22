#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to dublicate
 *
 * Return: pointer to the dublicated string,
 * or NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	unsigned int i;
	size_t len;
	char *array;


	if (str == NULL)
		return (NULL);

	len = strlen(str);


	array = (char *)malloc((len + 1) * sizeof(char));
	if(array == NULL)
		return (NULL);
	

	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}


	array[len] = '\0';


	return (array);
}
