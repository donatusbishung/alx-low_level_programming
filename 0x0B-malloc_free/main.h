#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *create_array(unsigned in size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
int _putchar(char c);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
