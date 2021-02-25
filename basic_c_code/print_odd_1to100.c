//5. Write a C program to print all odd number between 1 to 100.

#include<stdio.h>

void main()
{
int i=1,n=100;
printf("enter the all odd no ");
scanf("%d",&n);

while(i<n)
{
printf("%d\n",i);
i=i+2;
}
return 0;
}
