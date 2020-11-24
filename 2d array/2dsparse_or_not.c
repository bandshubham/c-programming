//16. Write a C program to check whether given matrix is sparse or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100][20];
	int arr1[100][3];
	int flag=0;
	int r,c;
	int i,j;
	int sum=0;
	int count=0;
	int r1;
	printf("enter no of row\n");
	scanf("%d",&r);
	printf("enter no of columns\n");
	scanf("%d",&c);

	printf("Enter element in an matrix of m*n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	
		printf("entered matrix is:\n");

		for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

		arr1[0][0]=r;
		arr1[0][1]=c;

		r1=1;
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]!=0)
			{
				count++;
				arr1[r1][0]=i;
				arr1[r1][1]=j;
				arr1[r1][2]=arr[i][j];
				r1++;
			}
		}
	}

	arr1[0][2]=count;

	printf("sparse matrix is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	getch();
}