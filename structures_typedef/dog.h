#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Info about dog
 *@name: pointer to string, Dog's name
 *@age: float for age of dog
 *@owner: pointer to name of owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

