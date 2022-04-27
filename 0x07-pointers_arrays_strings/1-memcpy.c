#include "main.h"
/**
*_memset - fills memory with const byte
*
*@s: pointer to a string
*@b: The constant byte to be used for replacemnt
*@n: number of bytes
*
*Return: A  pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        i = 0;
        while (i < n)
        {
                *(s + i) = *(s +1);
                i++;
        }
        return (dest);
}
