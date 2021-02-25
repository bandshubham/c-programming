//30. Write a C program to check whether a number is Armstrong number or
#include<stdio.h>
void main()

{
int n,temp,rem,sum=0,i=2;
printf("enter the no");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;

}

if(temp==sum)
printf("enter the armstrong no");
else
printf("enter the not an armstrong no");

}
