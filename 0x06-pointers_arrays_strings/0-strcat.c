#include <stdio.h>
#include <string.h>
/*
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src) {
  char *ret;
  int dest_len;

  /* Check for NULL pointers */
  if (dest == NULL || src == NULL) {
    return NULL;
  }

  /* Get the length of the destination string */
  dest_len = strlen(dest);

  /* Point ret to the end of the destination string */
  ret = dest + dest_len;

  /* Copy the source string to the end of the destination string */
  while (*src != '\0') {
    *ret = *src;
    ret++;
    src++;
  }

  /* Add a terminating null byte to the end of the destination string */
  *ret = '\0';

  return dest;
}
