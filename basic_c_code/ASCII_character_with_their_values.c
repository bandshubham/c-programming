//Write a C program to print all ASCII character with their values.

#include<stdio.h>
void main()
{


int i=0;
for(i=0;i<256;i++)

{
printf("ASCII value char %c=%d\n",i,i);

}}

24. Write a C program to find HCF (GCD) of two numbers.

#include<stdio.h>
void main()
{
int n,n1,n2,i,m;
printf("enter two no");
scanf("%d%d",&n1,&n2);
if(n1<n2)
{
n=n1;

}
else
{

n=n2;

}

for(i=1;i<=n;i++)
{

if(n1%i==0 && n2%i==0)
m=i;
}
printf("%d\n",m);
}
