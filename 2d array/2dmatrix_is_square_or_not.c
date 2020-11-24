//9. Write a C program to check whether given matrix is square or not.
//3*3 or 2*2 matrix called square matrix
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

	if(r==c)
		printf("entered matrix is square matrix");
	else
		printf("entered matrix is not an square matrix");

	getch();

}
