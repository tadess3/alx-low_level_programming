#include<stdio.h>

/**
*main -Entry point
*
*Return: always 0
*/
int main(void)
{
int c, d, e;

for (c = 48; c <= 55; c++)
{
for (d = c + 1; d <= 56; d++)
{
for (e = d + 1; e <= 57; e++)
{
putchar(c);
putchar(d);
putchar(e);
if (c != 55 || c != 56 || c != 57)
{
putchar(44);
putchar(32);
}
}
}
}

putchar(10);
return (0);
}
