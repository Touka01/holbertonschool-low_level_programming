#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * len - find length of string
 * @str: string
 * Return: length
 */
int len(char *str)
{
    int i;

    for (i = 0; *(str + i); i++)
        ;
    return (i);
}

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog1;
    char *copy_of_name;
    char *copy_of_owner;

    dog1 = malloc(sizeof(dog_t));
    if (dog1 == NULL)
        return (NULL);

    dog1->age = age;

    if (name != NULL)
    {
        copy_of_name = malloc(len(name) + 1);
        if (copy_of_name == NULL)
        {
            free(dog1);
            return (NULL);
        }
        strcpy(copy_of_name, name);
        dog1->name = copy_of_name;
    }
    else
        dog1->name = NULL;

    if (owner != NULL)
    {
        copy_of_owner = malloc(len(owner) + 1);
        if (copy_of_owner == NULL)
        {
            free(copy_of_name);
            free(dog1);
            return (NULL);
        }
        strcpy(copy_of_owner, owner);
        dog1->owner = copy_of_owner;
    }
    else
        dog1->owner = NULL;

    return (dog1);
}
