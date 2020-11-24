//2. Write a C Program to Read a Matrix and find Sum of all elements.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20][20];
    int m,n;
	int i,j;
	int sum=0;

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
			sum=sum+(arr[i][j]);
		}
	}

	printf("sum of all elements in array is:\n");
	printf("%d",sum);

	getch();
}