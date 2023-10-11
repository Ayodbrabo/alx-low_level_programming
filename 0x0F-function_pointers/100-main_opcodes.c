#include <stdio.h>
#include <stdlib.h>
/**
* main - main function
* @argc: numbers
* @argv: array
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int num_bytes, i;
char *main_address;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
main_address = (char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", main_address[i] & 0xFF);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
