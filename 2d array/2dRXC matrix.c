//1.Write a C program to read and print a RXC matrix, R and C must be given by user.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20][20];
    int m,n;
	int i,j;

	printf("enter no of row\n");
	scanf("%d",&m);
	printf("enter no of columns\n");
	scanf("%d",&n);

	printf("Enter element in an matrix of m*n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}

	printf("entered matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d",arr[i][j]);
		}
	}
	getch();
}