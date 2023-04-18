#include "dog.h"


/**
*_strcopy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}


/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *poppy;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

poppy = malloc(sizeof(dog_t));
if (poppy == NULL)
return (NULL);

poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (poppy->name == NULL)
{
free(poppy);
return (NULL);
}

poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (poppy->owner == NULL)
{
free(poppy->name);
free(poppy);
return (NULL);
}
