//9. Write a C program to print multiplication table of any number.

#include<stdio.h>
void main()
{

int n,i,mul=0;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
mul=n*i;
printf("%d",mul);
}

}
