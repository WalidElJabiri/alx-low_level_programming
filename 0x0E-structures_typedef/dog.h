#ifndef dog
/**
 * struct dog - a structure called dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
