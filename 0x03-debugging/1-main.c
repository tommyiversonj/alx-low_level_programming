#include <stdio.h>

/**
 * main - printf infinite loop incoming causes the output of the program 
 to go into an infinite loop
 * Return: 0
 */

int main(void)
{
  int i;

  printf("Infinite loop incoming :(\n");

  i = 0;

  while (i < 10)
    {
      putchar(i);
    }

  printf("Infinite loop avoided! \\o/\n");

  return (0);
}
