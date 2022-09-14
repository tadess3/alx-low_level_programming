#include<stdio.h>

/**
*main -Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
int fibb[50];
fibb[0] = 1;
fibb[1] = 2;
printf("%d, %d, ", fibb[0], fibb[1]);

for (i = 2; i < 50; i++)
{
fibb[i] = fibb[i - 1] + fibb[i - 2];
if (i == 49)
printf("%d\n", fibb[i]);
else
printf("%d, ", fibb[i]);
}
return (0);
}
