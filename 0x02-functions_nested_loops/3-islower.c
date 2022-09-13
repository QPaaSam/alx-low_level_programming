#include "main.h"
/**
 *_slower - checks for a lowercase character
 *@r:letter being tested
 *Return: Always 0.
 */
int _islower(int r)
{
if (r >= 97 && r <= 122)
return (1);
else
return (0);
}
