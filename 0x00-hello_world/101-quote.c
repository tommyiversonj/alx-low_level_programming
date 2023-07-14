#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
*main - main function
*
*
*Return: return 0
*/
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, strlen(message));
return (1);
}
