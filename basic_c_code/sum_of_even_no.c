7. Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
void main()
{
int i=0,n,sum=0;
printf("enter the value\n");
scanf("%d",&n);
while(i<=n)
{
if(i%2==0)
{
sum=sum+i;
printf("%d\n",sum);
}
i++;
}

}
