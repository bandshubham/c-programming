//4. Write a C Program to find Sum of all elements of each row of a matrix.


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
		sum=0;
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+(arr[i][j]);
		}
		printf("sum of row %d:-%d\n",i,sum);
	}
	printf("multiplication of all elements in array is:\n");
	printf("%d",sum);

	getch();
}