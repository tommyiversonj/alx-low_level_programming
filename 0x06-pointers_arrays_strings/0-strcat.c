#include <stdio.h>
#include <string.h>
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char* concatenate_by_section(char *dest, char *src, int src_start, int src_end) {
    // Find the end of the destination string
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }

    // Append the section of the source string to the destination string
    int i;
    for (i = src_start; i < src_end && src[i] != '\0'; i++) {
        *ptr++ = src[i];
    }

    // Add a terminating null byte
    *ptr = '\0';

    return dest;
}
