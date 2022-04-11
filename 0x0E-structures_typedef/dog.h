#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - defines a dog by name, age, owner
* @name: name of a dog
* @age: age of a dog
* @owner:owner of a dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG_H */
