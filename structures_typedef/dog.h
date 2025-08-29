#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for storing information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This structure stores the basic information
 * about a dog including its name, age, and owner.
 */
struct dog
{
	char *name;
	float  age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif  /* DOG.H */
