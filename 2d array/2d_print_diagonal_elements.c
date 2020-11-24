//6. Write a C program to accept a matrix and print diagonal elements
//matrix has 2 diagonals 1st have condition i==j and other is i+j=c

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

	printf("diagonal 1 elements are:\n");

	for(i=0;i<m;i++)
	{
		
		for(j=0;j<n;j++)
		{
          if(i==j)
		  {
			  printf("%d\n",arr[i][j]);
		  }
		}
		
	}


	printf("diagoanl 2 elements are\n");
	for(i=0;i<m;i++)
	{
		
		for(j=0;j<n;j++)
		{
          if(i+j==n-1)
		  {
			  printf("%d\n",arr[i][j]);
		  }
		}
		
	}

	

	getch();
}