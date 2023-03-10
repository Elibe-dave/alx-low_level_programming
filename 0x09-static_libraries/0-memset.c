#include "main.h"
/**
 * _memset - this fills a block of memory with a specific value
 * @s: this is the starting address of memory to be filled
 * @b: this is the desired value
 * @n: this is number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
