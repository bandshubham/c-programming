//10. Write a C program to count number of digits in a number.

#include<stdio.h>
void main()
{
int count,n;
count=0;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;


}
printf("no of digits is given %d=",count);
}
