//11. Write a C program to check whether given matrix is |
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[100][100];
	int r,c,i,j;
	printf("enter the no rows and no of column\n");
	scanf("%d\n%d",&r,&c);

	printf("entered elements in an array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("entered matrix is:\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}

	printf("lower triangular matrix is\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i<j)&&(i!=j))
			{
				printf("%d\t",arr1[i][j]);
			}
		}

		printf("\n");
	}

	getch();

}