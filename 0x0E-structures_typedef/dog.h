#ifndef DOG_H
#define DOG_H

 /**
* struct dog - this is a type displaying
* basic features of a dog
* @name:char
* @age: float
* @owner: char to check
* desc - this struct is for a dog and it's details
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *my_dog;
#endif

