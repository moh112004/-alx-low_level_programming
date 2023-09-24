#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another
 * if n less than or equals  the second stirng length, else
 * concatenates entire the second string.
 * @s1: the first string to append to.
 * @s2: the second string to concatenates from.
 * @n: the number of bytes will be taken from s2.
 * Return: returns a pointer to the resulting string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int x = 0, y = 0, lens1 = 0, lens2 = 0;

if (s1)
while (s1[lens1])
lens1++;
if (s2)
while (s2[lens2])
lens2++;
if (n < lens2)
str = malloc(sizeof(char) * (lens1 + n + 1));
else
str = malloc(sizeof(char) * (lens1 + lens2 + 1));
for (x = 0; x < lens1; x++)
str[x] = s1[x];
if (n > lens2)
for (y = 0; y < lens2; y++)
str[y + lens1] = s2[y];
else
for (y = 0; y < n; y++)
str[y + lens1] = s2[y];
if (!str)
return (NULL);
else
return (str);
}
