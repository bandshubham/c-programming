//17. Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
void main()

{
int n,remainder,first,reverse=0;

printf("enter the integer");
scanf("%d",&n);
first=n;

while( n!=0)

{
remainder=n%10;
reverse=reverse*10+remainder;
n/=10;


}

if(first==reverse)

printf("%d palindrome",first);

else

printf("%d not palindrome",first);

return 0;

}
