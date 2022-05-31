#include "dog.h"
#include <stdlib.h>

/**
 ** new_dog - creates a new dog
 ** @name: name of new dog
 **@age: age of new dog
 ** @owner: owner of new dog
 ** Return: dog or NULL if program fails
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int ln_name = 0, ln_owner = 0, i = 0;

new_dog = malloc(sizeof(*new_dog));

if (new_dog == NULL || !(name) || !(owner))
{
free(new_dog);
return (NULL);
}

for (; name[ln_name]; ln_name++)
;
for (; owner[ln_owner]; ln_owner++)
;
new_dog->name = malloc(ln_name + 1);
new_dog->owner = malloc(ln_owner + 1);

if (!(new_dog->name) || !(new_dog->owner))
{
free(new_dog->owner);
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (; i < ln_name; i++)
new_dog->name[i] = name[i];
new_dog->name[i] = '\0';
new_dog->age = age;
for (i = 0; i < ln_owner; i++)
new_dog->owner[i] = owner[i];
new_dog->owner[i] = '\0';
return (new_dog);
}
