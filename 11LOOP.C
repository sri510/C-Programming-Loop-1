/* To find last digit of a number */
#include<stdio.h>
#include<conio.h>
void main()
{
int n, ln;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);

ln = n % 10;
printf("Last digit = %d",ln);
getch();
}