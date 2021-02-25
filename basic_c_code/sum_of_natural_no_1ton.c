//6. Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
void main()
{
int i, n,sum=0;
printf("enter the no");
scanf("%d",&n);

for(i=0;i<=n;i++)
{

sum=sum+i;

}
printf("sum=%d",sum)s;
}
