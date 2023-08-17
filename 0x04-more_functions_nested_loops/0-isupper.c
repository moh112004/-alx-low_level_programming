#include "main.h"
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: if it is uppercase returns 1 if not returns 0
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
