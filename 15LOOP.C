/* To cal product of digit of a number */
#include<stdio.h>
#include<conio.h>
int main()
{
int num;
long long product=1ll;


printf("Enter any number to cal product of a digit: ");
scanf("%d",&num);

product = (num == 0 ? 0 : 1ll);

while(num != 0);

product = product * (num % 10);

num = num / 10;
printf("Product of digits =  %lld", product);
return 0;
}