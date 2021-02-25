//4. Write a C program to print all even numbers between 1 to 100. - using while loop

#include<stdio.h>

void main()
{
int i=2,n=100;
printf("enter the even number");
scanf("%d",&n);
while(i<n)
{
printf("%d\n",i);
i=i+2;
}
return 0;
}
