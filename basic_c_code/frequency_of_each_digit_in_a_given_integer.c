//18. Write a C program to find frequency of each digit in a given integer.

#include<stdio.h>
void main()
{
num;
int n,count=0,digit,remainder;

printf("enter the number");
scanf("%d",&num);

printf(" enter the digit to count");
scanf("%d",&digit);



while(n!=0)

{
remainder=n%10;
if(remainder==digit)

count++
num=num/10;

}


printf("%d,%d",digit,count);


}