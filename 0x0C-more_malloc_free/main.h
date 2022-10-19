#ifndef main_h
#define main_h

/**
 * Main - main.h
 *
 * Description: Header file containing the prototypes
 * for all of the functions for project 0x0C. C - malloc, free.
 */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
