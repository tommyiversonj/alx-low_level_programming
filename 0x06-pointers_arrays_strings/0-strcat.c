#include <stdio.h>
#include <string.h>
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    
    printf("Before concatenation:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // Concatenate a section of str2 to str1
    concatenate_by_section(str1, str2, 0, 5); // Concatenate the first 5 characters of str2 to str1
    
    printf("\nAfter concatenation:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    return 0;
}
