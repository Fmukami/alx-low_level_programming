#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m_dog;
	int i, lname, lowner;

	m_dog = malloc(sizeof(*m_dog));
	if (m_dog == NULL || !(name) || !(owner))
	{
		free(m_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	m_dog->name = malloc(lname + 1);
	m_dog->owner = malloc(lowner + 1);

	if (!(m_dog->name) || !(m_dog->owner))
	{
		free(m_dog->owner);
		free(m_dog->name);
		free(m_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		m_dog->name[i] = name[i];
	m_dog->name[i] = '\0';

	m_dog->age = age;

	for (i = 0; i < lowner; i++)
		m_dog->owner[i] = owner[i];
	m_dog->owner[i] = '\0';

	return (m_dog);
}
