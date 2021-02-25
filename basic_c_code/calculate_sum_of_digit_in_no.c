//14. Write a C program to calculate sum of digits of a number.

#include<stdio.h>
void main()
{

int n,dig,sum;

printf("enter an integer number");
scanf("%d",&n);
sum=0;
while(n>0)
{

dig=n%10;
sum= sum+dig;
n=n/10;
}

printf("sum of all digits %d",sum);
}
