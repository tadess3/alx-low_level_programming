#include"main.h"

/**
*print_last_digit -Entry point
*@y: integer
*Return: y last digit
*/
int print_last_digit(int y)
{
int x;
if (y < 0)
{
x = -1 * (y % 10);
_putchar(x + '0');
return (x);
}
else
{
x = y % 10;
_putchar(x + '0');
return (x);
}
}
