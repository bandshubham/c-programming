//7. Write a C program to fidn multiplication matrix of two matrices.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[100][100];
	int arr2[100][100];
	int arr3[100][100];
	int r1,c1;
	int r2,c2;
	int i,j,k;
	
	printf("enter the row and column of matrix 1\n");
	scanf("%d\n%d",&r1,&c1);

	printf("enter the row and column of matrix 2\n");
	scanf("%d\n%d",&r2,&c2);

	if(c1==r2)
	{
	printf("enter elements in an array1\n");

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("array entered is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}

	printf("enter elements in an array2\n");

	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}

	}

	printf("array entered is\n");

	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}



	for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				arr3[i][j]=0;
			}
		}


		for (i=0;i<r1;i++) 
	{
        for ( j = 0; j < c2; j++)
		{
            for ( k = 0; k< c1; k++)
			{
				arr3[i][j]=arr3[i][j] + arr1[i][k] * arr2[k][j];
            }
		}
	}

		printf("multiplication of matrix is\n");

		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	}
   else
   {
	   printf("matrix multiplication is not possible");
   }


	getch();
}