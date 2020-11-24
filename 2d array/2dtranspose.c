//5. Write a C program to transpose a matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20][20];
	int arr2[20][20];
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
		
		for(j=0;j<n;j++)
		{
          arr2[j][i]=arr[i][j];			
		}
		
	}

	printf("transpose of matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}

	

	getch();
}