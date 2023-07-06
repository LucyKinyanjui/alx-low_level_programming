#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int binary_to_uint(const char *b)
{
unsigned int a, v = 0;

if (!b)
return (0);

for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
if (b[a] == '1')
v = v * 2 + 1;
else
v = v * 2 + 0;
}
return (v);
}
