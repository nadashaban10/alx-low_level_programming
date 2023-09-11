#include <stdlib.h>
#include "dog.h"
#include <string.h>
dog_t *new_dog(char *name, float age, char *owner) {
    /*Allocate memory for the dog structure*/
    dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
    /*condition if failed*/
    if (newDog == NULL) {
        return NULL; 
    }
    
    /*Allocate memory for the name w owner and copy the values*/
    newDog->name = (char *)malloc(strlen(name) + 1);
    newDog->owner = (char *)malloc(strlen(owner) + 1);
    
    if (newDog->name == NULL || newDog->owner == NULL) {
        /*Memory allocation if name or owner failed*/
        free(newDog->name);
        free(newDog->owner);
        free(newDog);
        return NULL;
    }
    
    strcpy(newDog->name, name);
    newDog->age = age;
    strcpy(newDog->owner, owner);
    
    return newDog;
}
