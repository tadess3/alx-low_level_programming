#include<stdio.h>

/**
*main -Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, s = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 5) == 0 || (i % 3) == 0)
s = s + i;
}
printf("%d", s);
return (0);
}
