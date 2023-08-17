#include "main.h"
/**
*_isdigit - function that verifies if the  character is a digit or not
*@c: the tested character
*Return: returns 1 if it is not a digit 0 if it is a digit
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
