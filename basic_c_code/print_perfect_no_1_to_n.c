33. Write a C program to print all Perfect numbers between 1 to n.
#include<stdio.h>

void main()
{

int n,i,j,sum;
printf("enter the  perfect no");
scanf("%d",&n);

for(i=1;i<=n;i++)
{

sum=0;

for(j=1;j<i;j++)
{

if(i%j==0)
{
sum+=i;

}

}

if(sum==i)
printf("%d\n",i);
}


}
