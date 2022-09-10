#include<stdio.h>

/**
*main -Entry point
*
*Return: always 0
*/
int main(void)
{
int c, d;

for (c = 48; c <= 56; c++)
{
for (d = c + 1; d <= 57; d++)
{
putchar(c);
putchar(d);
if (c != 56 || d != 57)
{
putchar(44);
putchar(32);
}
}
}

putchar(10);
return (0);
}
