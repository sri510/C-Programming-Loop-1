/* To swap first and last digif of a number */
#include<stdio.h>
#include<conio.h>
int main()
{
double f, s, temp;

printf("Enter 1st number: ");
scanf("%d",&f);

printf("Enter 2nd number: ");
scanf("%d",&s);

temp = f;

f = s;

s = temp;

printf("after swapping 1st number = %d",f);
printf("after swapping 2nd number = %d", s);

return 0;
}