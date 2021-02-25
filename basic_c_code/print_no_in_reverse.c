/*2. Write a C program to print all natural numbers in reverse (from n to 1). -
using while loop*/



#include<stdio.h>

void main()
{
int i,n;
printf("enter the all reverse 1 to n");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d\n",n);
n--;
}
return 0;
}
