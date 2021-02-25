//15. Write a C program to calculate product of digits of a number.

#include<stdio.h>
void main()
{

int n,dig,product;

printf("enter an integer number");
scanf("%d",&n);
product=1;
while(n>0)
{

dig=n%10;
product= product*dig;
n=n/10;
}

printf("product of all digits %d",product);
}
