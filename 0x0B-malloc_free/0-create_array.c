#include "main.h"
/**
 * *create_array -  function that creates an array of chars
 * @c : The character to initialize the array witht
 * @size: The size of the array.
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c) {
  if (size == 0) {
    return NULL;
  }

  char *array = malloc(sizeof(char) * size);
  if (array == NULL) {
    return NULL;
  }

  for (unsigned int i = 0; i < size; i++) {
    array[i] = c;
  }

  return array;
}
