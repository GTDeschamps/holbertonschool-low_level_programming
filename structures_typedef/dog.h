#ifndef DOG_H
#define DOG_H
/**
 *struct dog -Entry point
 *@name: name of the dog
 *@age: how is old
 *@owner: who is the master
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
