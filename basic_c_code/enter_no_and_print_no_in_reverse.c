//16. Write a C program to enter a number and print its reverse.

#include<stdio.h>
void main()
{

int n, remainder,reverse=0;

printf("enter the integer");
scanf("%d",&n);

while(n!=0)
{

remainder=n%10;
reverse=reverse*10+remainder;
n/=10;

}

printf("reversed number %d",reverse);
return 0;
}
