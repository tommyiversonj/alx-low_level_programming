#include <stdio.h>
#include <string.h>

/*
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n) {
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }

  if (i < n) {
    dest[i] = '\0';
  }

  return dest;
}
