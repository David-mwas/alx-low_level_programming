
#ifndef MAIN_H
#define MAIN_H

/*Function to print a character*/
int _putchar(char c);

/*Function that creates an array chars and initializes with a specific char.*/
char *create_array(unsigned int size, char c);

/*Function that returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);

/*Function that concatenates two strings*/
char *str_concat(char *s1, char *s2);

/*Function that returns a pointer to a 2 dimensional array of integers*/
int **alloc_grid(int width, int height);

/*Function frees a 2-D grid previously created by your alloc_grid*/
void free_grid(int **grid, int height);

/*Function that concatenates all the arguments of your program*/
char *argstostr(int ac, char **av);

#endif /* MAIN_H
