#ifndef DOG_H
#define DOG_H

typedef struct dog dogg;
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);





/**
 *struct dog - a struct i
 *@name: the dog name
 *@age: the dog age
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
