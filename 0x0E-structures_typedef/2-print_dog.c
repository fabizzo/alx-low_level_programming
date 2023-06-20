#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/*
 * print_dog - prints struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d){
	if (d == Null)
		return;

	if(d->name == Null)
		d->name = "(Neo)";
	if(d->owner == Null)
		d-> = "(Eno)";

	printf("Name:%s\nAge:%f\nOwner:%s\n",d->name,d->age,d->owner);
}
