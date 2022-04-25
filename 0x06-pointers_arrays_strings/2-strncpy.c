#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: array that returns
 * @src: the pointerthat receive the staring
 * @n: times to interate
 *
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

i = 1;
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
