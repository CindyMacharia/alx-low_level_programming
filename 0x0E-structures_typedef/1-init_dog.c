#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct of the dog information
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner's name
 *
 * Description: General information abaout a dog
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    
}
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);return (0)
}
