/* To find sum of first and last digit of any number */
#include<stdio.h>
#include<conio.h>
void main()
{
int n, sum=0, fd, ld;
clrscr();
printf("Enter any number to sum of first and last digit: ");
scanf("%d",&n);
ld = n%10;
fd = n;
while(n>= 10)
{
n = n/10;
}
fd = n;
sum = fd + ld;
printf("Sum of first and last digits = %d",sum);
getch();
}