#include <stdio.h>
#include <string.h>
/**
 * concatenate_by_section - Concatenate a section of a string to another string.
 * @dest: The destination string.
 * @src: The source string.
 * @src_start: The starting index of the section in the source string.
 * @src_end: The ending index (exclusive) of the section in the source string.
 *
 * Return: A pointer to the resulting destination string.
 */
char *concatenate_by_section(char *dest, char *src, int src_start, int src_end)
{
    // Find the end of the destination string
    char *ptr = dest;
    while (*ptr != '\0')
    {
        ptr++;
    }

    // Append the section of the source string to the destination string
    int i;
    for (i = src_start; i < src_end && src[i] != '\0'; i++)
    {
        *ptr++ = src[i];
    }

    // Add a terminating null byte
    *ptr = '\0';

    return dest;
}
