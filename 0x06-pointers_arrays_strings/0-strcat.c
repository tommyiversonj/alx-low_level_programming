#include <stdio.h>
#include <string.h>

/*
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Returns a pointer to the resulting string dest
 */
int main(void) 
{
  char s1[98] = "Hello ";
  char s2[] = "World!\n";
  char *ptr;

  /* Print the original strings */
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);

  /* Concatenate the strings */
  ptr = _strcat(s1, s2);

  /* Print the concatenated string */
  printf("ptr: %s\n", ptr);

  return 0;
}
