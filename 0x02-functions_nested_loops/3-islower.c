#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: single integer input
 * Return: return 1 is success and 0 is false
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
