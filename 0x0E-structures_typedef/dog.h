#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog that contain name,age, and owner variables
 * @name: string containing dog's name
 * @age: float containing dog's age
 * @owner: string containing dog's owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
