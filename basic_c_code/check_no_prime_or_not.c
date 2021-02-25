//26. Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
void main()
{
int a, i,rem,count=0;

printf("enter the number");
scanf("%d", &a);
{
for(i=1;i<=a;i++)
{
rem=a%i;

if(rem==0)
{
count++;
}

}

}
if(count==2)
{
printf("prime\n");
}
else
{
printf("not prime\n");
}
}
