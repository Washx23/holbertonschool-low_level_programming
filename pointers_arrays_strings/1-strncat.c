#include "main.h"

/**
 * *_strcat - funcion
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

char* strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len ;
    size_t i;
    int c = 0;

    while (dest[c] != '\0')
           c++;
    dest_len = c ;

   for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

   return dest;
}
