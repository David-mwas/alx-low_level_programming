#ifndef MAIN_H
#define MAIN_H

/*Function to print a character*/
int _putchar(char c);

/*Function to evaluate is a lower character*/
int _islower(int c);

/*Function to evaluate is a character*/
int _isalpha(int c);

/*Give the absolute any number*/
int _abs(int n);

/*Function to evaluate is a uppercase character*/
int _isupper(int c);

/*Function to check for digits*/
int _isdigit(int c);

/*Calculate the size of a string*/
int _strlen(char *s);

/*Function to prints a string*/
void _puts(char *s);

/*Function that copies the string pointed to by src*/
char *_strcpy(char *dest, char *src);

/*Function that convert a string to an integer*/
int _atoi(char *s);

/*Function that concatenates two strings*/
char *_strcat(char *dest, char *src);

/*Function that concatenates two strings, at most n bytes of src*/
char *_strncat(char *dest, char *src, int n);

/*Function that copies the string pointed to by src*/
char *_strncpy(char *dest, char *src, int n);

/*Function that compare strings*/
int _strcmp(char *s1, char *s2);

/*Function to fill memory with constant byte*/
char *_memset(char *s, char b, unsigned int n);

/*Function that copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*Function that locates a character in a string*/
char *_strchr(char *s, char c);

/*Function that locates a character in a string*/
unsigned int _strspn(char *s, char *accept);

/*Function that searches a string for any of a set of bytes*/
char *_strpbrk(char *s, char *accept);

/*Function that locates a substring*/
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
