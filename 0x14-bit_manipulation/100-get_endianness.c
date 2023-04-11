#include "main.h"

/*
 * get_endianness - Checks the endianness of the current system.
 * Description: A function that determines whether the current system is
 * big-endian or little-endian. The function returns 1
 * if the system is little-endian, and 0 if it is big-endian.
 * Return: 1 if the system is little-endian, 0 if it is big-endian.
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

/*
 * If the first byte of the integer representation of 1 is 1
 * the system is little-endian. Otherwise, it is big-endian.
*/
return (*c);
}
