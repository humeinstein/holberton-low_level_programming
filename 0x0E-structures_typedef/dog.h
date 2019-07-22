#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - name,age,owner
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
