include <stdio.h
/**
 * main - entry point. print the number of arguments past to the program.
 * @argc: the number od arguments past
 * @argv: an array of pointers to the argument
 * return: always 0
 */
 int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
