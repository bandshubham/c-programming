//11. Write a C program to find first and last digit of a number.

#include<stdio.h>
 main()
{
int n,last;
printf("enter any number");
scanf("%d",&n);

last=n%10;

printf("the last digit of entered number %d",last);


while(n>=10)
{
n=n/10;

}


printf("the first digit  of entered number %d",n);

}
