#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type struct dog with the following elements:
 * @name: is for name
 * @age: for age
 * @owner: for ownership
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
