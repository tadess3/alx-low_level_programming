#include"main.h"

/**
*_isalpha -Entry point
*
*Return: 1 if c _isalpha
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
