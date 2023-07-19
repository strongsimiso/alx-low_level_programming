#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char *argv[])
{
int i, bytes;
char *main_ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}

main_ptr = (char *) main;
for (i = 0; i < bytes; i++)
printf("%02x ", main_ptr[i] & 0xff);
printf("\n");

return (0);
}
