#include "dog.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string of unknown length
 *
 * Return: str_len
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	return (str_len);
}

/**
 * char *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: copy destination of string
 * @src: copy source of string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int tracker;
	char *hold;

	hold = dest;

	for (tracker = 0; src[tracker] != '\0'; tracker++)
	{
		dest[tracker] = src[tracker];
	}
	dest[tracker++] = '\0';

	return (hold);
}

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_copy, owner_copy;

	name_copy = _strlen(name);
	owner_copy = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (name_copy + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (owner_copy + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
