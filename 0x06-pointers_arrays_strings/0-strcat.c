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
  int dest_len = strlen(dest);
  int src_len = strlen(src);

  /* Move the pointer to the end of dest. */
  dest += dest_len;

  /* Copy the src string to dest. */
  for(int i = 0; i < src_len; i++) {
    *dest++ = *src++;
  }

  /* Add a terminating null byte. */
  *dest = '\0';

  return dest;
}
