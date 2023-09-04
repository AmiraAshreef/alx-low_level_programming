#ifndef MAIN_H
#define MAIN_H
/**
*main - header file for protoypes
*void protoypes (void)
*int protoypes (int)
*/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);


#endif /* MAIN_H */
